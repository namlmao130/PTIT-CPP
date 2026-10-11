#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a, a + n);
        int b=1e9;
        for(int i=0;i<n-1;i++)
             b=min(b,abs(a[i]-a[i+1]));
        cout << b << endl;
    }
    return 0;
}
