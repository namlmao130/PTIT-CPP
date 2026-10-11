#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main(){
    int t;
    cin >> t;
    while (t--){
    int n;
    cin >> n;
    long long f[1001];
    f[0]=0;
    f[1]=1;
    for (long long i=2;i<=n;i++){
    f[i]=f[i-1]+f[i-2];
    f[i] %= mod;
    }
    cout << f[n] << endl;
}
return 0;
}
