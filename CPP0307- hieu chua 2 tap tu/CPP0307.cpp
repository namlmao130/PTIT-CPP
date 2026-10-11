#include <bits/stdc++.h>
using namespace std;

void testcase() {
    string a,b,c;
    getline(cin,a);
    getline(cin,b);

    map<string,bool> s;
    stringstream ss(a);
    while(ss >> c) s[c] =1;
    stringstream ss2(b);

    while(ss2 >> c)
    {
        if (s.find(c) != s.end()) s.erase(s.find(c));
    }
    for (auto x : s)
    {
        cout << x.first << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        testcase();
    }
    return 0;
}
