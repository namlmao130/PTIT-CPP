#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        int d[26]={0},cnt=0;
        for (auto x : s){
            d[x- 'a']++;
        }
        for (auto x : d){
            if(x>=1) cnt++;
        }
        if(s.length() >= 26 && k>=26-cnt) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}
