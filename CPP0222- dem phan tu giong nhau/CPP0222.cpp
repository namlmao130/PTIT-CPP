#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    vector<int> v(1e5+1,0);
    for (int i = 0; i < n; i++) {
            set<int> s;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            s.insert(x);
        }
    vector<int> t(s.begin(), s.end());
    for (auto x : t) v[x]++;
    }
    int d=0;
    for (int x : v) {
        if (x == n) d++;
    }
    cout << d << endl;
    }
    return 0;
}
