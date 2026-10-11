#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        map<int,int> fusion;
        for (int i=0;i<n;i++){ cin >> a[i]; fusion[a[i]]++; }
        for (int i=0;i<m;i++){ cin >> b[i]; fusion[b[i]]++; }
        for (auto x : fusion)
        cout << x.first << " ";
        cout << endl;
        for (auto x : fusion){
            if ( x.second >= 2) cout << x.first << " ";
        }
        cout << endl;
    }
    return 0;
}
