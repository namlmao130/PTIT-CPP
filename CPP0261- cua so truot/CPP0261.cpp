#include <bits/stdc++.h>
using namespace std;

void xuatmang(int a[][100],int n)
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
        int n,m;
        cin >> n;
        int a[100][100];
        int b[10][10];
        for (int i=0;i<n;i++)
        {
             for (int j=0;j<n;j++)
             {
                  cin >> a[i][j];
             }
        }
        cin >> m;
        for (int i=0;i<m;i++)
        {
             for (int j=0;j<m;j++)
             {
                 cin >> b[i][j];
             }
        }
        for (int i=0;i<n;i+=m)
        {
            for (int j=0;j<n;j+=m)
            {
                for (int k=0;k<m;k++)
                {
                    for (int l=0;l<m;l++)
                    {
                        a[k+i][j+l] *= b[k][l];
                    }
                }
            }
        }
    xuatmang(a,n);
    return 0;
}
