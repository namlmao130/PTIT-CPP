#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000;

int N, M;
int A[MAX+5];
bool not_coprime[MAX+5]; // đánh dấu các số không thoả mãn

// Hàm lấy phân tích thừa số nguyên tố của x
vector<int> prime_factors(int x) {
    vector<int> factors;
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) {
            factors.push_back(i);
            while (x % i == 0) x /= i;
        }
    }
    if (x > 1) factors.push_back(x);
    return factors;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < N; i++) cin >> A[i];

    // Tập hợp các ước số nguyên tố của tất cả A[i]
    set<int> primes;
    for (int i = 0; i < N; i++) {
        vector<int> pf = prime_factors(A[i]);
        for (int p : pf) primes.insert(p);
    }

    // Đánh dấu các số không thoả mãn (chia hết cho ít nhất một ước số nguyên tố)
    for (int p : primes) {
        for (int x = p; x <= M; x += p) {
            not_coprime[x] = true;
        }
    }

    // K=1 luôn thoả mãn vì gcd(1, any) = 1
    not_coprime[1] = false;

    // In kết quả
    vector<int> res;
    for (int k = 1; k <= M; k++) {
        if (!not_coprime[k]) res.push_back(k);
    }

    cout << (int)res.size() << "\n";
    for (int x : res) cout << x << " ";
    cout << "\n";

    return 0;
}
