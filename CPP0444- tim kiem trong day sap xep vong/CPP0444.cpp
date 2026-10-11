#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,pos;
        cin >> n >> x;
        for (int i=0;i<n;i++)
        {
            int j;
            cin >> j;
            if(j == x) pos = i;
        }
        cout << pos +1 << endl;
    }
    return 0;
}
