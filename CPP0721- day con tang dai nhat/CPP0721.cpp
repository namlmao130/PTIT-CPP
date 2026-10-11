
#include <bits/stdc++.h>
using namespace std;

int LIS(int a[], int n) {
    int dp[n+1];
    int res = 0;
    for(int i=0;i<n;i++) dp[i] =1;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j] ) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        res = max(res,dp[i]);
    }

    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << LIS(a,n) << endl;
    }
    return 0;
}
