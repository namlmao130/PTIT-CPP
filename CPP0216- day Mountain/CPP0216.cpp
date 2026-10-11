#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,l,r;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        cin >> l >> r;
        while(l<=r && a[l] <= a[l+1]) l++;
        while(l<=r && a[l] >= a[l+1]) l++;
        if(l >= r ) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
