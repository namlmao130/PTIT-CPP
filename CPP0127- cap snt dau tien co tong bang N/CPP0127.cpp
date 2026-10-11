#include <bits/stdc++.h>
using namespace std;
vector<bool> prime(1e6+1,1);
void sieve()
{
    for(int i=0;i<1e6;i++)
        prime[i]=1;
    prime[0]=prime[1]=0;
    for(int i=2;i<=1e3;i++){
            if(prime[i]){
                    for(int j=i*i;j<=1e6;j+=i){
                        prime[j]=0;
            }
        }
    }
}
void solve()
{
    sieve();
    int n;
    cin >> n;
    for(int i=2;i<=n/2;i++){
        if(prime[i] && prime[n-i]){ cout << i <<" "<< n-i << endl;
            return;
        }
    }
    cout << "-1\n";
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

