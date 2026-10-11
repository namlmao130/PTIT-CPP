#include <bits/stdc++.h>
using namespace std;
long long max(long long a,long long b){
    return a > b ? a : b;
}

void solve() {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0;i<n;i++)
            cin >> a[i];
        long long current_max = a[0], global_max = a[0];
        for(int i=1;i<n;i++){
                current_max = max(a[i], current_max + a[i]);
                global_max = max(global_max ,current_max);
        }
        cout << global_max << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
          solve();
    return 0;
}
