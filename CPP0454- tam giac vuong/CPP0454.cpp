#include <bits/stdc++.h>
using namespace std;

void testcase()
{
        int n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            a[i] = a[i]*a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
            {
                if(binary_search(a + j, a + n, a[i] + a[j])){
                    cout << "YES" << endl;
                    return;
                }
            }
        }
        cout << "NO" << endl;
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
