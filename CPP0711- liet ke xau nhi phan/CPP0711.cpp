#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n - 1) {
            for (int x : a) cout << x;
            cout << " ";
        } else Try(i + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
    cin >> n;
    a.resize(n);
    Try(0);
    cout << endl;
    }
}
