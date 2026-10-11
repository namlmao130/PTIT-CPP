#include <iostream>
using namespace std;

void solve() {
    int N, P;
    cin >> N >> P;

    int x = 0;
    while (N > 0) {
        x += N / P;
        N /= P;
    }

    cout << x << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
