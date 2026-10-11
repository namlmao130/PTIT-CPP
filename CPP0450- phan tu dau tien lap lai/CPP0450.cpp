#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int,int> v;
        int res=-1,check=1;
        for (int i=0;i<n;i++)
        {
            int m;
            cin >> m;
            v[m]++;
            if (v[m] == 2 && check){
                    res=m;
                    check=0;
            }
        }
        cout << res << endl;
    }
    return 0;
}
