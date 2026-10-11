#include <bits/stdc++.h>
using namespace std;
long long prime(long long n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n % i ==0) return 0;
    }
    return 1;
}
void solve()
{
        long long n,r;
        cin >> n;
        for(int i=1;i<=sqrt(n);i++){
            if (n % i == 0) {
            if (prime(n / i)) {
                cout << n / i << endl;
                return;
            }
            if (prime(i))
                r = i;
        }
    }
    cout << r << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
