#include <bits/stdc++.h>
using namespace std;
int main()
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
            if(cnt != 0) cout << i << " " << cnt << endl;
    }
    if(x != 1) cout << x << " " << "1";
    return 0;
}
