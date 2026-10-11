#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int i=n-2,j=n-1;

    while(a[i] <= a[j] && i >=0) i--;
    while(a[j] >= a[i] ) j--;
    swap (a[i],a[j]);
    for (int x :a) cout << x << " ";

    cout << endl;
    }
    return 0;
}
