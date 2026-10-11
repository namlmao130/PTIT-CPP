#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> v;
        bool d[100001] = {0};

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
            d[x] = 1;
        }

        int L = *min_element(v.begin(), v.end());
        int R = *max_element(v.begin(), v.end());

        int cnt = 0;
        for (int i = L; i <= R; i++) {
            if (!d[i]) cnt++;
        }

        cout << cnt << "\n";
    }
}
