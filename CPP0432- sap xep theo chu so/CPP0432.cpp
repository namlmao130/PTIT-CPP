#include <bits/stdc++.h>
using namespace std;

bool cmp(string a,string b)
{
    string s1 = a + b;
    string s2 = b + a;
    return s1 > s2;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end(),cmp);
        for(auto x : a){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}
