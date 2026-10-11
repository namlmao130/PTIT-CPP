#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

ull Mul(ull a,ull b,ull mod)
{
    if (b == 0) return 0;
    if (b == 1) return a % mod;
    ull res = 0;
    a %= mod;
    while(b > 0){
        if(b % 2 == 1){
            res = (res + a) % mod;
        }
        a = (a * 2) % mod;
        b = b/2;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ull a,b,c;
        cin >> a >> b >> c;
        cout << Mul(a,b,c) << endl;
    }
    return 0;
}
