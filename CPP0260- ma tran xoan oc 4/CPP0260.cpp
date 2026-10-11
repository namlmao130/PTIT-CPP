#include <bits/stdc++.h>
using namespace std;
void xuatmang(int a[][20],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
        int n;
        cin >> n;
        int a[20][20];
        vector<int> v;
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++)
            {
                cin >> a[i][j];
                v.push_back(a[i][j]);
            }
        }
        sort (v.begin(),v.end());
        int h1=0,h2=n-1 , c1 =0 , c2= n-1 , d=0;
        while(h1 <= h2 && c1 <= c2)
        {
            for (int i=c1;i<=c2;i++)
            {
                a[h1][i] = v[d];
                d++;
            }
            h1++;
            if( d == n*n) break;
            for (int i=h1; i<=h2;i++)
            {
                a[i][h2] = v[d];
                d++;
            }
            c2--;
            if( d == n*n) break;
            for (int i=c2; i>=c1;i--)
            {
                a[h2][i] = v[d];
                d++;
            }
            h2--;
            if( d == n*n) break;
            for (int i=h2;i>=h1;i--)
            {
                a[i][c1] = v[d];
                d++;
            }
            c1++;
            if( d == n*n) break;
    }
    xuatmang(a,n);
    return 0;
}
