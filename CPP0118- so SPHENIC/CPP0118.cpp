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
        vector<int> d;
        for (int i=2;i<=n;i++)
        {
            if(n%i == 0){
            while(n % i == 0)
            {
                n /= i;
                d.push_back(i);
            }
            }
            if(n == 1) break;
        }
        if(n > 1 ) d.push_back(n);
        if(d.size() == 3 && d[0] != d[1] && d[1] != d[2]) cout << "1" << endl;
        else cout << "0" << endl;
    }
}
