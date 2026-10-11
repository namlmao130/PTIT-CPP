#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    string s;
    getline(cin, s);
    bool d[10] = {0};
    if(s[0] == '0'){
        cout << "INVALID" << endl;
        return;
    }
    else {
        for (int i=0;i<s.length();i++)
        {
             if(s[i] < '0' || s[i] > '9'){
                cout << "INVALID" << endl;
                return;
             }
             else {
                int num = s[i] - '0';
                d[num] = 1;
             }
        }
    }
    for (int i=0;i<10;i++)
    {
        if(!d[i]){
            cout << "NO" << endl;
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
        testcase();
    }
    return 0;
}
