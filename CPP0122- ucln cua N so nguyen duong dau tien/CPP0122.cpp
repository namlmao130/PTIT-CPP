#include <bits/stdc++.h>
using namespace std;
int gcd(long long a,int b)
{
    while( b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
long long lcm(long long a, int b)
{
    return a*b/gcd(a,b);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long x=1;
        for (int i=2;i<=n;i++)
        {
            x=lcm(x,i);
        }
        cout << x << endl;
    }
    return 0;
}
