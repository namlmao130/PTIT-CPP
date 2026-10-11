#include <bits/stdc++.h>
using namespace std;

bool Reverse(string s)
{
    int n = s.length();
    for(int i=0;i<n/2;i++)
    {
        if(s[i] != s[n-1-i]) return 0;
    }
    return 1;
}
bool cmp(string a,string b)
{
    if(a.length() != b.length())
       return a.length() > b.length();
    return a > b;
}
int main()
{
    string s;
    map<string,int> v;
    while(cin >> s){
    string tmp;
    stringstream ss(s);
    while(ss >> tmp)
    {
        if(tmp.length() != 1 && Reverse(tmp)){
            v[tmp]++;
        }
    }
    }
    vector<string> res;
    for(auto x : v)
    {
        res.push_back(x.first);
    }
    sort(res.begin(),res.end(),cmp);
    for(auto x : res) cout << x << " " << v[x] << endl;
    return 0;
}
