#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        for(int i=0;i<s.length();i++)
        {
            int j=i;
            while( s[i] == s[j] && j<s.length())
            {
                j++;
            }
                cout << s[i] << j-i;
                i=j-1;
        }
        cout << endl;
    }
    return 0;
}
