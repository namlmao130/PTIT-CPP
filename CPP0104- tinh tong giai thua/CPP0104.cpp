#include <iostream>
using namespace std;
long gt(int n)
{
    if (n==1 || n==0) return 1;
    return n*gt(n-1);
}
int main()
{
    int n;
    cin >> n;
    long s=0;
    for (int i=1;i<=n;i++)
    {
        s += gt(i);
    }
    cout << s;
    return 0;
}
