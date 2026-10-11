#include <bits/stdc++.h>
using namespace std;
vector<bool> prime(1e4+1,1);
void sieve()
{
    for(int i=0;i<1e4;i++)
        prime[i]=1;
    prime[0]=prime[1]=0;
    for(int i=2;i<=1e2;i++){
            if(prime[i]){
                    for(int j=i*i;j<=1e4;j+=i){
                        prime[j]=0;
            }
        }
    }
}
int main()
{
    sieve();
    int t;
    cin >> t;
    while(t--)
    {
        int M,N;
        cin >> M >> N;
        if(M>N) swap(M,N);
        for(int i=M;i<=N;i++){
            if(prime[i]) cout << i<< " ";
        }
        cout << endl;
    }
    return 0;
}
