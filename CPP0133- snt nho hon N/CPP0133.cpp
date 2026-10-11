#include <bits/stdc++.h>
using namespace std;
vector<bool> prime(10001,1);
void sieve()
{
    for (int i=0;i<=10000;i++)
        prime[i]=1;
    prime[0]=prime[1]=0;
    for(int i=2;i<=100;i++){
        if(prime[i]){
            for(int j=i*i;j<=10000;j+=i)
                prime[j]=0;
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
        int n;
        cin >> n;
        for(int i=2;i<=n;i++)
        {
            if(prime[i]) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
