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
        vector<bool> v(n+1,0);
        for (int i=1;i<n;i++)
        {
            int x;
            cin >> x;
            v[x]=1;
        }
        for (int i=1;i<=n;i++){
            if(!v[i]){
            cout << i<< endl;
            break;
            }
        }
    }
    return 0;
}
