#include <bits/stdc++.h>
using namespace std;

struct GiangVien
{
    string ma,hoten,mon,ten;
};
void nhap(GiangVien &a)
{
    scanf("\n");
    getline(cin ,a.hoten);
    getline(cin,a.mon);

    string s1;
    stringstream ss1(a.hoten);
    while (ss1 >> s1) {
        a.ten = s1;
    }
    string s = "";
    string tmp;
    stringstream ss(a.mon);
    while(ss >> tmp)
    {
        tmp[0] = toupper(tmp[0]);
        s += tmp[0];
    }
    a.mon = s;
}
void in(GiangVien a)
{
    cout << a.ma << " " << a.hoten << " " << a.mon << endl;
}
bool cmp(GiangVien a, GiangVien b) {
    if (a.ten == b.ten) return a.ma < b.ma;
    return a.ten < b.ten;
}
void sapxep(GiangVien a[],int n)
{
    sort(a,a+n,cmp);
}
int main()
{
    int n;
    cin >> n;
    GiangVien gv[n];
    for(int i=0;i<n;i++)
    {
        nhap(gv[i]);
        gv[i].ma = "GV" + to_string(i + 1);
        if (i + 1 < 10)
            gv[i].ma.insert(2, "0");
    }
    sapxep(gv,n);
    for(int i=0;i<n;i++)
    {
        in(gv[i]);
    }
    return 0;
}
