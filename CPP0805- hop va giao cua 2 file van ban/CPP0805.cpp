#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream in1("DATA1.in");
    ifstream in2("DATA2.in");

    set<string> s1, s2;
    string temp;

    while(in1 >> temp) {
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        s1.insert(temp);
    }

    while(in2 >> temp) {
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        s2.insert(temp);
    }

    set<string> s_union = s1;
    for(auto x : s2) {
        s_union.insert(x);
    }

    for(auto x : s_union) cout << x << " ";
    cout << endl;

    for(auto x : s1) {
        if(s2.count(x) != 0) {
            cout << x << " ";
        }
    }

    in1.close();
    in2.close();
    return 0;
}
