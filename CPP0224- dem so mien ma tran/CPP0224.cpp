#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1,-1,-1,0,1,1,1,0};
int dy[8] = {-1,0,1,1,1,0,-1,-1};
int n,m;
int a[100][100];
void BFS(int r,int c)
{
    for (int i=0;i<8;i++)
    {
        int x = r + dx[i];
        int y = c + dy[i];
        if(a[x][y]==1  && x >= 0 && x < n && y >= 0 && y < m )
        {
            a[x][y]=0;
            BFS(x,y);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    int d=0;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if( a[i][j] == 1){
            d++;
            BFS(i,j);
            }
        }
    }
    cout << d << endl;
    }
    return 0;
}
