#include <bits/stdc++.h>
using namespace std;

vector<int> v(1e9+1,1);
void era()
{
    v[0]=v[1]=0;
    for (int i=2;i<=sqrt(1e9);i++)
    {
        if(v[i])
        {
            for (int j=i*i;j<=1e9;j+=i)
            {
                v[j]=0;
            }
        }
    }
}
int main()
{
    era();
    int t;
    cin >> t;
    while(t--)
    {
        int l,r;
        cin >> l >> r;
        int d=0;
        for (int i=l;i<=r;i++)
        {
            if(v[i]) d++;
        }
        cout << d << endl;
    }
    return 0;
}
