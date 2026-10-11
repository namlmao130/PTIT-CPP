#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long> f(1e6+1,0);
        f[0]=0;
        f[1]=1;
        for (int i=2;i<=1e6;i++)
        {
            f[i]= f[i-1] + f[i-2];
        }
        for (int i=0;i<=f.size();i++)
        {
            if(f[i] >= n){
            if(f[i] == n) cout << "YES" << endl;
            else cout << "NO" << endl;
            break;
            }
        }
    }
    return 0;
}
