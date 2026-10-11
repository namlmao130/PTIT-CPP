#include <bits/stdc++.h>
using namespace std;

bool endline(string s){
    char c = s.back();
    return (c == '.' || c == '?' || c == '!');
}
int main() {
    string s,tmp;
    vector<string> v;
    while(cin >> s){
         v.push_back(s);
    }
    bool caps=1;
    for(auto x : v){
        transform(x.begin(),x.end(),x.begin(), :: tolower);
        if(caps){
            x[0] = toupper(x[0]);
            caps=0;
        }
        if(endline(x)){
            x.pop_back();
            cout << x << endl;
            caps=1;
        }
        else cout << x << " ";
    }
    return 0;
}
