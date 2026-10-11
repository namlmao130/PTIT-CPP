#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        long long d=0;
        int j=1;
        for (int i = 0; i < n-1; i++) {
            while (j < n && a[j] - a[i] < k) j++;
            d += (j - i - 1);
        }
        cout << d << endl;
    }
    return 0;
}
