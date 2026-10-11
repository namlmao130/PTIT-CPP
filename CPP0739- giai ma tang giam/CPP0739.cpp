#include <bits/stdc++.h>
using namespace std;

string smallestNumber(string pattern) {
    string res = "";
    stack<int> st;
    int num = 1;

    for (int i = 0; i <= pattern.size(); i++) {
        st.push(num++);
        if (i == pattern.size() || pattern[i] == 'I') {
            while (!st.empty()) {
                res += to_string(st.top());
                st.pop();
            }
        }
    }
    return res;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << smallestNumber(s) << "\n";
    }
    return 0;
}
