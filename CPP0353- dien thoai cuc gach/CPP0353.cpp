#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<string> v(10);
v[2]={"ABCabc"};
v[3]={"DEFdef"};
v[4]={"GHIghi"};
v[5]={"JKLjkl"};
v[6]={"MNOmno"};
v[7]={"PQRSpqrs"};
v[8]={"TUVtuv"};
v[9]={"WXYZwxyz"};
    string s;
    getline(cin,s);
    string d;
    for(char x:s){
        for(int i=2;i<=9;i++){
            if(v[i].find(x) != string::npos){
                char c = char(i);
                d.push_back(c);
            }
        }
    }
    for (int i=0;i<=d.length()/2;i++){
        if(d[i] != d[d.length()-i-1]){ cout << "NO" << endl;
        return;
        }
    }
    cout << "YES" << endl;
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        solve();
    }
    return 0;
}
