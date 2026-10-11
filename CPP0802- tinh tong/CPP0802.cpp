#include <bits/stdc++.h>
using namespace std;

bool isInt(string s){
    if( s.length() > 10 || (s.length() > 11 && s[0] == '-')) return 0;
    if(s[0] == '-'){
        for (int i=1;i<s.length();i++)
        {
            if(!isdigit(s[i])) return 0;
        }
        return 1;
    }
    for (int i=0;i<s.length();i++)
    {
        if (s[i] < '0' || s[i] > '9') return 0;
    }
    return 1;
}
int main() {
    ifstream fin("DATA.in");

    string s;
    vector<string> ss;
    while(fin >> s)
    {
        ss.push_back(s);
    }
    long long sum =0;
    for (string x : ss){
            if(isInt(x)) sum += stoi(x);
        }
    cout << sum;
    return 0;
}
