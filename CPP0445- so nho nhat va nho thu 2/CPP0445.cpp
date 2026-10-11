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
        set<int> v;
        for (int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            v.insert(x);
        }
        vector<int> s(v.begin(),v.end());
        if (s.size()<2) cout << "-1" << endl;
        else cout << s[0] << " " << s[1] << endl;
    }
    return 0;
}
