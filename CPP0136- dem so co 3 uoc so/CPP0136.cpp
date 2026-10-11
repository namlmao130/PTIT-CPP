#include <bits/stdc++.h>
using namespace std;
bool prime (int n)
{
    if(n<2) return 0;
    for (int i= 2; i<=sqrt(n);i++)
    {
        if(n % i ==0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        int d=0;
        for (int i=2;i<=sqrt(n);i++)
        {
            if(prime(i)) d++;
        }
        cout << d << endl;
    }
    return 0;
}
