#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void solve()
{
    int N;
    cin >> N;
    for(int i=2;i<=N/2;i++)
        {
        if (prime(i) && prime (N-i)){ cout << i << " " << N-i;
        return;}
        }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
