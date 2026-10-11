#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b > 0)
    {
        long long x = a % b;
        a = b;
        b = x;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

void test()
{
    int x,y,z;
        long long n;
        cin >> x >> y >> z >> n;
        long long left = pow (10,n-1);
        long long right = pow (10,n)-1;
        long long bc = lcm(lcm(x,y),z);
        if(bc > right) cout << "-1" << endl;
        else if (left % bc == 0) cout << left << endl;
        else cout << bc * (left/bc +1) << endl;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        test();
    }
    return 0;
}
