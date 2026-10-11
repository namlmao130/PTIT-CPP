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
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    int h1=0,h2=n-1,c1=0,c2=m-1;
    int d=0;
    vector<int> res;
    while(d < n*m){
        for (int i= c1;i<= c2;i++){
            res.push_back(a[h1][i]);
            d++;
        }
        if(d == n*m) break;
        h1++;
        for (int i=h1;i <= h2 ;i++){
            res.push_back(a[i][c2]);
            d++;
        }
        if(d == n*m) break;
        c2--;
        for (int i=c2;i >= c1;i--){
            res.push_back(a[h2][i]);
            d++;
        }
        if(d == n*m) break;
        h2--;
        for (int i=h2;i >= h1;i--){
            res.push_back(a[i][c1]);
            d++;
        }
        if(d == n*m) break;
        c1++;
    }
    for(int i = res.size()-1;i>=0;i--) cout << res[i] << " ";
    cout << endl;
    }
    return 0;
}
