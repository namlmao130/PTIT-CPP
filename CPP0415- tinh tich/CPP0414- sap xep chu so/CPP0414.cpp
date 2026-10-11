#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin,s);
        stringstream ss(s);
        vector<int> v;
        while(ss >> s)
        {
            for (int i=0;i<s.length();i++)
            {
                v.push_back(s[i]-'0');
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        for(auto x:v) cout << x<< " ";
        cout << endl;
    }
    return 0;
}
