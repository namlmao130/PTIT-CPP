#include <bits/stdc++.h>
using namespace std;
bool check(long x)
{
    if( x% 100 != 86) return 0;
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long x;
        cin >> x;
        if( check(x)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}
