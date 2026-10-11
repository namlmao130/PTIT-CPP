#include <bits/stdc++.h>
using namespace std;

bool check(int a[],int l,int r,int x)
{
    while(l <= r){
        int b = (l+r) / 2;
        if(a[b] == x) return 1;
        else if(a[b] > x) r = b - 1;
        else l = b + 1;
    }
    return 0;
}
void testcase()
{
    int n,x;
        cin >> n >> x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for (int i = 0; i < n; i++) {
            if (a[i] + x > a[n - 1])
                break;
            if(check(a,0,n-1,a[i] + x)){
                cout << "1" << endl;
                return;
            }
        }
        cout << "-1" << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        testcase();
    }
    return 0;
}
