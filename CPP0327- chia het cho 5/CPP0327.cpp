#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    long long n=0;
    for(auto x : s){
        n = n * 2 +(x - '0');
        n %= 5;
    }
    return n % 5;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        if(check(s)) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}
