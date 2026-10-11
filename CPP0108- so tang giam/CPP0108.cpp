#include <bits/stdc++.h>
using namespace std;

bool tang(int n) {
    int d = 10;
    while (n > 0) {
        if (d <= n % 10)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}

bool giam(int n) {
    int d = -1;
    while (n > 0) {
        if (d >= n % 10)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}
bool prime(int n)
{
    if(n<2) return 0;
    for (int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,d=0;
        cin >> n;
        int left= pow(10,n-1);
        int right = pow (10,n)-1;
        for (int i=left;i<=right;i++)
        {
            if((tang(i) || giam (i)) && prime(i)) d++;
        }
        cout << d << endl;
    }
    return 0;
}
