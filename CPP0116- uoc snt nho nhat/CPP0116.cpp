#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++)
    {
        if(n % i ==0) return 0;
    }
    return 1;
}
int prime2(int n)
{
    if (n<2) return 0;
    for (int i=2;i<=sqrt(n);i++)
    {
        if(n % i ==0) return i;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for (int i=1;i<=n;i++)
        {
            if(i==1) cout << "1" << " ";
            else if(i % 2 ==0 && i> 2) cout << "2" << " ";
            else if(prime(i)) cout << i << " ";
            else cout << prime2(i) << " ";
        }
        cout << endl;
    }
}
