#include <bits/stdc++.h>
using namespace std;
int solve(long x)
{
    while (x >= 10){
        int sum=0;
    while(x != 0){
        sum += x% 10;
        x /= 10;
    }
    x= sum;
    }
    return x;
}
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long x;
        cin >> x;
        cout << solve(x) << endl;
    }
    return 0;
}
