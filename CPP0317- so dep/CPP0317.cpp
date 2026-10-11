#include <bits/stdc++.h>
using namespace std;
bool rev(string s)
{
    string rev=s;
    reverse (rev.begin(),rev.end());
    return rev == s;
}
bool even(string s)
{
    for (auto x : s)
    {
        if((x -'0') % 2 == 1) return 0;
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
        if(rev(s) && even(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
