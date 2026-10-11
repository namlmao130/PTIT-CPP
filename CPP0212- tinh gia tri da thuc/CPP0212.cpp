#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,p=0;
        cin >> n >> x;
        int a[n];
        long long t=1;
        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=n-1;i>=0;i--)
        {
            p = (p + t * a[i]) % mod;
            t = t * x % mod;
        }
        cout << p << endl;
    }
    return 0;
}
