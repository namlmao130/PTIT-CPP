#include <iostream>
#include <vector>
#include <algorithm>
#include <initializer_list>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 0) {
        cout << 0 << "\n";
        return;
    }

    if (n == 1) {
        cout << a[0] << "\n";
        return;
    }

    long long max_global = a[0];
    long long max_current = a[0];
    long long min_current = a[0];

    for (int i = 1; i < n; ++i) {
        long long val = a[i];

        long long max_cu = max_current;
        long long min_cu = min_current;

        max_current = max({val, val * max_cu, val * min_cu});
        min_current = min({val, val * max_cu, val * min_cu});

        max_global = max(max_global, max_current);
    }

    cout << max_global << endl;
}

int main() {
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
