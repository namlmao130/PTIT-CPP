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
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int Min= 2 * 1e6;
        for (int i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++){
                if(abs(a[j]+a[i]) < abs(Min)) Min=a[j]+a[i];
            }
        }
        cout << Min << endl;

    }
    return 0;
}
