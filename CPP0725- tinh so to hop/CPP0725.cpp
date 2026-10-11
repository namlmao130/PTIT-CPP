#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % MOD;
        }
        exp /= 2;
        base = (base * base) % MOD;
    }
    return res;
}

long long mod_inverse(long long a) {
    return power(a, MOD - 2);
}
long long combinations(int n, int r) {
    // Handle the trivial cases
    if (r < 0 || r > n) {
        return 0;
    }
    if (r == 0 || r == n) {
        return 1;
    }
    // Optimization: C(n, r) = C(n, n-r)
    if (r > n / 2) {
        r = n - r;
    }

    // 1. Calculate the Numerator: Num = n * (n-1) * ... * (n-r+1) mod P
    long long num = 1;
    for (int i = 0; i < r; ++i) {
        // (n - i) can be up to 10^8, so it fits in a standard int.
        // We ensure the multiplication is done mod MOD at each step.
        // C++'s % operator handles positive results correctly for positive n.
        // (n - i) is guaranteed to be positive as n >= r.
        num = (num * (n - i)) % MOD;
    }

    // 2. Calculate the Denominator: Den = r! mod P
    long long den = 1;
    for (int i = 1; i <= r; ++i) {
        den = (den * i) % MOD;
    }

    // 3. Calculate the Modular Inverse of the Denominator: Den_inv = (r!)^-1 mod P
    long long den_inv = mod_inverse(den);

    // 4. Final Result: (Num * Den_inv) mod P
    long long result = (num * den_inv) % MOD;

    return result;
}

void solve() {
    int T;
    // Read the number of test cases
    if (!(cin >> T)) return;

    while (T--) {
        int n, r;
        if (!(cin >> n >> r)) return;

        cout << combinations(n, r) << endl;
    }
}

int main() {
    solve();

    return 0;
}
