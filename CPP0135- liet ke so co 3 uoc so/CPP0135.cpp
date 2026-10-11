#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        for(int i=2;i<=sqrt(N);i++)
        {
            if (prime(i)) cout << i*i << " ";
        }
        cout << endl;
    }
    return 0;
}
