#include <bits/stdc++.h>
using namespace std;

bool Prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int d=1;
        for (int i=2;i<=n;i++)
        {
            if(__gcd(i,n) == 1) d++;
        }
        if (Prime(d)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}
