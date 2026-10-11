#include <bits/stdc++.h>
using namespace std;
bool check(int n,long long k)
{
    int s=0;
    for(int i=1;i<=n;i++)
        {
            s += i%k;
        }
        if( s== k) return 1;
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        if( check(n,k)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}
