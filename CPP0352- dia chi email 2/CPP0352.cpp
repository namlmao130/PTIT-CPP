#include <bits/stdc++.h>
using namespace std;

map<string,int> d;
void solve()
{
    string s,tmp;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(), :: tolower);
    stringstream ss(s);
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    string Email = v.back();
    for (int i = 0; i <v.size()-1; i++) {
        Email += v[i][0];
    }
    d[Email]++;
    if(d[Email] > 1){
        Email += char(d[Email]+'0');
    }
    Email += "@ptit.edu.vn";
    cout << Email << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        solve();
    }
    return 0;
}
