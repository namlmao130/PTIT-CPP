#include <bits/stdc++.h>
using namespace std;

long long testcase(string s , long long n)
{
    long long k=0;
    for (auto x : s){
        k = (k*10 + (x - '0')) % n;
    }
    return k;
}
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        long long m;
        cin >> n >> m;
        cout << testcase(n,m) << endl;
    }
    return 0;
}
