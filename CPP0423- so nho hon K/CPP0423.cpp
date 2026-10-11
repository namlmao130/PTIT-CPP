#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        int j=0;
        for (int i=0;i<n;i++){
                cin >> a[i];
                if (a[i] <= k) j++;
        }
        int b=0;
        for (int i = 0; i < j; i++) {
             if (a[i] > k) b++;
        }
        int ans = b;
        for(int i=j; i<n;i++){
            if(a[i-j] > k) b--;
            if(a[i] > k) b++;
            ans = min(ans,b);
        }
        cout << ans << endl;
    }
    return 0;
}
