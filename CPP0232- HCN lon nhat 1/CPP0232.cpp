#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> h(n, vector<int>(m));
        for (int j = 0; j < m; j++) {
            h[0][j] = a[0][j];
            for (int i = 1; i < n; i++) {
                if (a[i][j] == 0) h[i][j] = 0;
                else h[i][j] = h[i-1][j] + 1;
            }
        }
        int Max=0;
        for (int i = 0; i < n; i++) {
            vector<int> r = h[i];
            sort(r.begin(), r.end(), greater<int>());
            for (int k = 0; k < m; k++) {
                Max = max(Max, r[k] * (k+1));
            }
        }
    cout << Max << endl;
    }
    return 0;
}
