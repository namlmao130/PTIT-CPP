#include <bits/stdc++.h>
using namespace std;

struct DanhSach
{
    string msv,ten,lop,email,dn;
    int stt;
};
void nhap(DanhSach ds[],int n)
{
    for(int i=0;i<n;i++){
    ds[i].stt = i+1;
    scanf("\n");
    getline(cin, ds[i].msv);
    getline(cin,ds[i].ten);
    getline(cin,ds[i].lop);
    getline(cin,ds[i].email);
    getline(cin,ds[i].dn);
    }
}
bool cmp(DanhSach a,DanhSach b)
{
    return a.msv < b.msv;
}
void sapxep(DanhSach ds[],int n)
{
    sort(ds,ds+n,cmp);
}
void in(DanhSach ds)
{
        cout << ds.stt << " "
        << ds.msv << " "
        << ds.ten << " "
        << ds.lop << " "
        << ds.email << " "
        << ds.dn << " " << endl;
}
int main()
{
    int n;
    cin >> n;
    DanhSach ds[n];
    nhap(ds,n);
    sapxep(ds,n);
    int m;
    cin >> m;
    scanf("\n");
    for(int i=0;i<m;i++)
    {
        string s;
        getline(cin,s);
        for(int j=0;j<n;j++)
        {
            if(s == ds[j].dn) in(ds[j]);
        }
    }
    return 0;
}
