#include <bits/stdc++.h>
using namespace std;

string testcase(string s1,string s2)
{
    int l= max(s1.length(),s2.length());
    while(s1.length() < l) s1 = "0" + s1;
    while(s2.length() < l) s2 = "0" + s2;

    if(s1 < s2) swap(s1,s2);
    int remember =0;
    string res= "";
    for (int i = l - 1; i >= 0; i--)
    {
        int digit = (s1[i] - '0') - (s2[i] - '0') - remember;
        if (digit < 0)
        {
            remember = 1;
            digit += 10;
        }
        else remember = 0;

        res = char(digit + '0') + res;
    }
    return res;

}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        cout << testcase(s1,s2) << endl;
    }
    return 0;
}
