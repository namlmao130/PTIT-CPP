#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[21][21];
int cnt;
void Try(int i,int j,int sum)
{
    sum += a[i][j];

    if(sum > k) return;

    if(i == n - 1 && j == n - 1){
        if(sum == k) cnt ++;
        return;
    }
    if(i + 1 < n){
        Try(i+1, j, sum);
    }
    if(j + 1 < n){
        Try(i, j + 1, sum);
    }
}
void TestCase()
{
    cin >> n >> k;
    for(int i = 0;i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cnt = 0;
    Try(0,0,0);
    cout << cnt << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        TestCase();
    }
    return 0;
}
