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
        int d=0;
        for (int i=1;i<=sqrt(n);i++)
        {
            if(n%i == 0){
               if (i % 2 == 0)
                d++;
               if ((n / i) % 2 == 0 && i * i != n)
                d++;
            }
        }
        cout << d << endl;
    }
    return 0;
}
