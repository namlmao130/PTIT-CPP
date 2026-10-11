#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(b !=0)
    {
        int r= a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,x,y;
        cin >> a >> x >> y;
        int d = gcd(x,y);
        for (int i=0;i<d;i++)
        {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}
