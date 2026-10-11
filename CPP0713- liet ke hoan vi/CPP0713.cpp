#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<bool> used;
void Try(int i)
{
    for (int j=1;j<=n;j++)
    {
        if(!used[j]){
            a[i] = j;
            used[j] = true;
        if(i == n-1){
            for (int x : a) cout << x;
            cout << " ";
            }
        else Try(i+1);
        used[j] = false;
        }
    }
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        cin >> n;
        a.resize(n);
        used.assign(n+1,false);
        Try(0);
        cout << "\n";
    }
    return 0;
}
