#include <bits/stdc++.h>
using namespace std;

vector<int> v(101);
bool Fibo(int n)
{
    v[0]=0;
    v[1]=1;
    for (int i=2;i<=100;i++)
    {
        v[i]= v[i-1] + v[i-2];
        if (v[i] == n) return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=0;i<n;i++)
        {
            if(a[i]==0) cout << a[i] << " ";
            if(Fibo(a[i])) cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
