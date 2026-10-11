#include <bits/stdc++.h>
using namespace std;

struct Products
{
    int code;
    string name,type;
    float buy,sell;
};
float profit(Products &a)
{
    return a.sell-a.buy;
}
bool cmp(Products a,Products b)
{
    return profit(a) > profit(b);
}
void nhap(Products &a)
{
    cin.ignore();
    getline(cin, a.name);
    getline(cin, a.type);
    cin >> a.buy >> a.sell;
}
void in(Products a)
{
    cout << a.code << " " << a.name << " " << a.type << " " << fixed << setprecision(2) << profit(a) << endl;
}
int main()
{
    int n;
    cin >> n;
    Products List[n];
    for(int i=0;i<n;i++)
    {
        List[i].code = i+1;
        nhap(List[i]);
    }
    sort(List,List+n,cmp);
    for(int i=0;i<n;i++)
    {
        in(List[i]);
    }
    return 0;
}
