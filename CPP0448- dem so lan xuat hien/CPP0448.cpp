#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int d = 0;
        for (int i=0;i<n;i++)
        {
            int m;
            cin>> m;
            if(m ==x ) d++;
        }
        d == 0 ? cout << "-1" << endl : cout << d << endl;
    }
    return 0;
}
