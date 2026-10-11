#include <bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin >> t;
     while(t--){
     int a,b;
     cin >> a >> b;
     long long f[100];
     f[1]=1;
     f[2]=1;
     for (int i=3;i<=b;i++)
     {
         f[i]= f[i-1] + f[i-2];
     }
     for (int i=a;i<=b;i++) cout << f[i] << " ";
     cout << endl;
     }
     return 0;
 }
