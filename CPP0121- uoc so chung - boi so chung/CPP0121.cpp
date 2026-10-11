#include <bits/stdc++.h>
using namespace std;
int gcd(long a,long b)
{
    while( b!=0)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
long long lcm(long a, long b)
{
    return a*b/gcd(a,b);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long a,b;
        cin >> a >> b;
        cout << lcm(a,b) << " " << gcd(a,b)<< endl;
    }
    return 0;
}
