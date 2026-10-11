#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> a;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (auto x : a) cout << x << " ";
    return 0;
}
