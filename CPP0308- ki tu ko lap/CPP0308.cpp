#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int d[26]= {0};
        for (auto x :s){
             d[x-'A']++;
        }
        for (auto x: s){
            if(d[x-'A'] == 1) cout << x;
        }
    cout << endl;
    }
    return 0;
}
