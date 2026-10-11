#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

void sieve()
{
    vector<bool> isprime(1e7+1,0);
    for(int i=0;i<1e7;i++){
        isprime[i] =1;
    }
    isprime[0] =0;
    isprime[1] =0;
    for (int i=2;i<=sqrt(1e7);i++)
    {
        if(isprime[i]){
            for(int j =i*i;j<= 1e7;j += i)
            {
                isprime[j] =0;
            }
        }
    }
    for (int i=2;i<=1e7;i++)
    {
        if(isprime[i]) primes.push_back(i);
    }
}
void Testcase()
{
    long long n;
    cin >> n;
    for(int p : primes)
    {
        int cnt =0;
            while(n % p ==0){
            cnt++;
            n /= p;
            }
            if(cnt != 0) cout << p << " " << cnt << endl;
    }
    if(n != 1) cout << n << " 1";
    cout << endl;
}
int main() {
    sieve();
    int t;
    cin >> t;
    while(t--)
    {
        Testcase();
    }
    return 0;
}
