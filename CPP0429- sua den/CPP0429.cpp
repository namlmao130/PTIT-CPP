#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, B;
    cin >> N >> K >> B;
    vector<int> a(N + 1, 1);
    for (int i = 0; i < B; i++) {
        int x;
        cin >> x;
        a[x] = 0;
    }
    int d = 0;
    for (int i = 1; i <= K; i++)
        if (a[i] == 0) d++;

    int res = d;
    for (int i = K + 1; i <= N; i++) {
        if (a[i - K] == 0) d--;
        if (a[i] == 0) d++;
        res = min(res, d);
    }

    cout << res;
    return 0;
}
