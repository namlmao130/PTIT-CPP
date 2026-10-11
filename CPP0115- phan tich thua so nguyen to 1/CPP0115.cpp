#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        for(int i=2;i<=sqrt(x);i++)
        {
            int cnt=0;
            while(x % i ==0){
                cnt++;
                x /= i;
            }
            if(cnt != 0) cout << i << " " << cnt << " ";
    }
    if(x != 1) cout << x << " " << "1";
    cout << endl;
    }
    return 0;
}
