#include <bits/stdc++.h>
using namespace std;

struct Time{
    int hour,minu,sec;
};

void nhap(Time t[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> t[i].hour >> t[i].minu >> t[i].sec;
    }
}
bool cmp(Time a,Time b)
{
    if(a.hour != b.hour) return a.hour < b.hour;
    if(a.minu != b.minu) return a.minu < b.minu;
    return a.sec < b.sec;
}
void sapxep(Time t[],int n)
{
    sort(t,t+n,cmp);
}
void in(Time t[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << t[i].hour << " " << t[i].minu << " " << t[i].sec << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    Time t[n];
    nhap(t,n);
    sapxep(t,n);
    in(t,n);
    return 0;
}
