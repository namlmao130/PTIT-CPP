#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string msv,ten,lop,Email;
};

void nhap(SinhVien &sv){
    cin >> sv.msv;
    cin.ignore();
    getline(cin , sv.ten);
    getline(cin,sv.lop);
    getline(cin, sv.Email);
}
void in(SinhVien sv)
{
    cout << sv.msv << " " << sv.ten << " " << sv.lop << " " << sv.Email << "\n";
}
int main()
{
    int n;
    cin >> n;
    SinhVien sv[n];
    for (int i=0;i<n;i++)
    {
        nhap(sv[i]);
    }
    int m;
    cin >> m;
    while(m--){
        string l;
        cin >> l;
        cout << "DANH SACH SINH VIEN LOP " << l << ":" << "\n";
        for(int i=0;i<n;i++){
            if (sv[i].lop == l)
                in(sv[i]);
        }
    }
    return 0;
}
