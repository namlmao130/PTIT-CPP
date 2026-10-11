#include <bits/stdc++.h>
using namespace std;

class DoanhNghiep
{
public:
    string ma,ten;
    int soSV;
    friend istream &operator >> (istream &is, DoanhNghiep &a)
    {
        scanf("\n");
        getline(cin, a.ma);
        getline(cin, a.ten);
        is >> a.soSV;
        return is;
    }
    friend ostream &operator << (ostream &os, DoanhNghiep a)
    {
        os << a.ma << " " << a.ten << " " << a.soSV << endl;
        return os;
    }
};
bool cmp(DoanhNghiep a, DoanhNghiep b) {
    if (a.soSV == b.soSV) return a.ma < b.ma;
    return a.soSV > b.soSV;
}
int main()
{
    int n;
    cin >> n;
    DoanhNghiep dn[n];
    for(int i=0;i<n;i++)
    {
        cin >> dn[i];
    }
    sort(dn,dn+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout << dn[i];
    }
    return 0;
}
