#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll Mul(ll a, ll b, ll p) {
    ll res = 0;
    a %= p;
    while (b > 0) {
        if (b & 1) res = (res + a) % p;
        a = (2 * a) % p;
        b >>= 1;
    }
    return res;
}

ll Pow(ll a, ll b, ll p) {
    ll res = 1;
    a %= p;
    while (b > 0) {
        if (b & 1) res = Mul(res, a, p);
        a = Mul(a, a, p);
        b >>= 1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;

    while(t--)
    {
    ll x,y,p;
    cin >> x >> y >> p;
    cout << Pow(x,y,p) << endl;
    }
    return 0;
}
