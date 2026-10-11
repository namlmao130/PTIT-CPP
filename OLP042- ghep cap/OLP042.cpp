#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000001;
vector<int> res(MAX_N,0);

void sieve()
{
    for(int i=1;i<MAX_N;i++){
        for(int j=i;j<MAX_N;j+=i){
            res[j]++;
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    cout << res[n] << endl;
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
