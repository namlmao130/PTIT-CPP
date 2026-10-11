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
    cin>> N;
    int k;
    cin >> k;
    vector<int> v;
    for(int i=2;i<=sqrt(N);i++)
    {
        while(N % i ==0)
        {
            if(prime(i)){
            v.push_back(i);
            N /= i;
            }
        }
    }
        if(N>1) v.push_back(N);
        if (k > v.size()) cout << "-1\n";
        else cout << v[k - 1];
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
