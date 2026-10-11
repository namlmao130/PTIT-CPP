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
        vector<long long> b;
        for (int i=0;i<n;i++){
            long long x;
            cin >> x;
            if (x >0 ) b.push_back(x);
        }
        for (int i=0;i<n;i++){
             if(i<=b.size()-1) cout << b[i] << " ";
             else cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
