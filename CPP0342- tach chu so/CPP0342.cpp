#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    int sum=0;
    string t;
    for (int i=0;i<s.length();i++)
    {
        if(isalpha(s[i])) t.push_back(s[i]);
        else sum += (s[i] -'0');
    }
    sort(t.begin(),t.end());
    cout << t << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        TestCase();
    }
    return 0;
}
