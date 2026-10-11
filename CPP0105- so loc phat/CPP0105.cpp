#include <iostream>
using namespace std;
bool locphat(long n)
{
    if (n %2 !=0) return 0;
    while(n != 0)
    {
        int c=n%10;
        if (c != 0 && c != 6 && c != 8) return 0;
        n /= 10;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--){
    long n;
    cin >> n;
    if (locphat(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    return 0;
}
