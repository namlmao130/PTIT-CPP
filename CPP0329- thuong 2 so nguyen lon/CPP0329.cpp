#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    while(a.length() > 1 && a[0] == '0') a.erase(0, 1);
    if(a == "0") return 0;
    while(b.length() > 1 && b[0] == '0') b.erase(0, 1);
    if(a.length() != b.length()) return a.length() > b.length();
    return a >= b;
}

string subtract(string a, string b) {
    string res = "";
    int n1 = a.size(), n2 = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    for (int i = 0; i < n1; i++) {
        int sub = (a[i] - '0') - (i < n2 ? (b[i] - '0') : 0) - carry;
        if (sub < 0) {
            sub += 10;
            carry = 1;
        } else carry = 0;
        res += to_string(sub);
    }
    while (res.size() > 1 && res.back() == '0') res.pop_back();
    reverse(res.begin(), res.end());
    return res;
}

string divide(string x, string y) {
    string res = "";
    string remainder = "";

    for (int i = 0; i < x.size(); i++) {
        remainder += x[i];
        while (remainder.size() > 1 && remainder[0] == '0') remainder.erase(0, 1);

        int count = 0;
        while (compare(remainder, y) == 1) {
            remainder = subtract(remainder, y);
            count++;
        }
        res += to_string(count);
    }
    while (res.size() > 1 && res[0] == '0') res.erase(0, 1);
    return res;
}

void testcase(){
    string a,b;
    cin >> a >> b;
    if(!compare(a,b)){
        cout << "0" << endl;
        return;
    }
    cout << divide(a,b) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        testcase();
    }
    return 0;
}
