#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>> n;
        vector<int> a(n);
        for (int i=0;i<n;i++) cin >> a[i];
        int i=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
               a[i] = a[i]*2;
               a[i+1] = 0;
            }
        }
        int d=0;
        for(int i=0;i<n;i++){
            if(a[i] == 0) d++;
        }
        for(int x : a)
        {
            if(x != 0)
            cout << x << " ";
        }
        for(int i=0;i<d;i++){
            cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}
