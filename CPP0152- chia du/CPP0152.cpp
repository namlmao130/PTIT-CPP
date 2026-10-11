#include <bits/stdc++.h>
using namespace std;
int solve(int a,int b)
{
    for (int i=0;i<=b-1;i++)
    {
        if(a*i % b == 1) return i;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,m;
        cin >> a >> m;
        cout << solve(a,m) << endl;
    }
    return 0;
}
