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
        map<int,int> v;
        for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v[x]++;
        }
        int cnt=0;
        for(auto x : v){
            if(x.second > 1) cnt+= x.second;
        }
    cout << cnt << endl;
    }
    return 0;
}
