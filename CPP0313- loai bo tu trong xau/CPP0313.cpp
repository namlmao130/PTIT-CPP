#include <bits/stdc++.h>
using namespace std;

int main() {
        string s,_s;
        getline(cin,s);
        cin >> _s;
        int pos= s.find(_s);
        if(pos != string::npos) s.erase(pos,_s.length()+1);
        cout << s;
    return 0;
}
