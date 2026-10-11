#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    string s;
    map<char,int> v;
    getline(cin ,s);
    for (auto x :s){
        v[x]++;
    }
    int d=0;
    for (auto x: v){
        d= max(d,x.second);
        }
    if(d > (s.length()+1)/2) cout << "0" << endl;
    else cout << "1" << endl;
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
