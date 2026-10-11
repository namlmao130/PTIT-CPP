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
        int v[n];
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        int Max=-1;
        for (int i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if(v[j] >= v[i]){
                if( Max < v[j]-v[i]) Max=v[j]-v[i];
                }
            }
        }
        cout << Max << endl;
    }
    return 0;
}
