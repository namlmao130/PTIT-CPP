#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string a;
    cin >> a;
    int ans = 0;
    for (int i = 0; i< a.length(); ++i)
    {
        if(a[i] >= '0' && a[i] <= '9'){
        int d=i+1;
        while(a[d] >= '0' && a[d] <= '9') d++;
        string t = a.substr(i,d-i);
        ans = max(ans,stoi(t));
        i=d;
        }
    }
    cout << ans << endl;
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
