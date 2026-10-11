#include <bits/stdc++.h>
using namespace std;
void test()
{
    int n,x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i=0;i<n;i++)
        {
            if(a[i] == x){
            cout << i+1 << endl;
            return;
            }
        }
        cout << "-1" << endl;
}
int main() {

    int T;
    cin >> T;
    while (T--) {
        test();
    }
    return 0;
}
