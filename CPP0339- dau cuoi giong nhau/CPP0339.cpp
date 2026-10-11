#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        int d = 0;
        for (int cnt : freq) {
            d += cnt * (cnt + 1) / 2;
        }
        cout << d << "\n";
    }

    return 0;
}
