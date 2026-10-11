#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
    int n;
    cin >> n;
    int a[n+1],b[n+1];
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        a[i] += a[i-1];
    }
    for (int i=1;i<=n;i++)
    {
        cin >> b[i];
        b[i] += b[i-1];
    }
    int d=0;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if(a[i]-a[j-1] == b[i]-b[j-1])
                d = max(d,i-j+1);
        }
    }
    cout << d << endl;
    }
    return 0;
}
