#include <iostream>
#include <cmath>
using namespace std;
bool chanle(int n)
{
    int chan=0,le=0;
    while(n!=0)
    {
        int a=n%10;
        if (a%2 == 0) chan++;
        else le++;
        n /= 10;
    }
    if (chan == le ) return 1;
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int left = pow(10,n-1);
    int right = pow (10,n)-1;
    int dem=0;
    for (int i=left;i<=right;i++)
    {
        if (chanle(i)){
            cout << i<< " ";
            dem++;
            if (dem %10 == 0) cout << endl;
        }
    }
    return 0;
}
