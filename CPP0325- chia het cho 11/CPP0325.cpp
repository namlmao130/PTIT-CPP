#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    int sum_old=0,sum_even=0;
    for(int i=0;i<s.length();i++)
    {
        if (i % 2 == 1 ) sum_even += (s[i]-'0');
        else sum_old += (s[i]-'0');
    }
    return abs(sum_even-sum_old) %11 == 0;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        if(check(s)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}
