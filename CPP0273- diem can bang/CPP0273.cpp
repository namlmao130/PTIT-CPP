#include <bits/stdc++.h>
using namespace std;

void testcase() {
    int n;
    cin >> n;
    int a[n + 1] = {0};
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    int sum = a[n];
    for (int i = 1; i <= n; ++i) {
        int sL = a[i - 1];
        int sR = a[n] - a[i];
        if (sL == sR) {
            cout << i << endl;
            return;
        }
    }
    cout << "-1" << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        testcase();
    }
    return 0;
}
