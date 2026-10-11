#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int i=0;
        while(i<n-1)
        {
            if (i != n-1){
            cout << a[n-1] << " " << a[i] << " ";
            i++;
            n--;
            }
        }
        if( i == n-1) cout << a[i];
        cout << endl;
    }
    return 0;
}
