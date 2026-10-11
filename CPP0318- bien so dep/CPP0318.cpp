#include <bits/stdc++.h>
using namespace std;

bool tangchat(string s)
{
    for (int i=0;i<4;i++)
    {
        if(s[i+1]-'0' <= s[i]-'0') return 0;
    }
    return 1;
}
bool bangnhau(string s)
{
    for (int i=0;i<4;i++)
    {
        if(s[i] != s[i+1]) return 0;
    }
    return 1;
}
bool bangnhau2(string s)
{
    if(s[0]==s[1] && s[1]==s[2] && s[3]==s[4]) return 1;
    else return 0;
}
bool locphat(string s)
{
    for (int i=0;i<5;i++)
    {
        if(s[i] != '6' && s[i] != '8') return 0;
    }
    return 1;
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        string s2= s.substr(5,6);
        s2.erase(3,1);
        if(tangchat(s2) || bangnhau(s2) || bangnhau2(s2) || locphat(s2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
