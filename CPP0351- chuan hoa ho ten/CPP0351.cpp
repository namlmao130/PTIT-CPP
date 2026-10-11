#include <bits/stdc++.h>
using namespace std;
string cach1(vector<string> &s)
{
    string res = s[s.size()-1] + " ";
    for (int i=0;i<s.size()-1;i++) res += (s[i] + " ");
    return res;
}
string cach2(vector<string> &s)
{
    string res;
    for (int i=1;i<s.size();i++) res += (s[i] + " ");
    res += s[0];
    return res;
}
void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    string s,tmp;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(), :: tolower);
    stringstream ss(s);
    vector<string> v;
    while(ss >> tmp){
        tmp[0] = toupper(tmp[0]);
        v.push_back(tmp);
    }
     if( n == 1) cout << cach1(v) << endl;
     else if( n == 2) cout << cach2(v) << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
