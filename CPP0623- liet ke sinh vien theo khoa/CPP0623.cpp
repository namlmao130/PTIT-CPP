#include <bits/stdc++.h>
using namespace std;
/*
Mã sinh viên: dãy ký tự không có khoảng trống (không quá 15). Đảm bảo không trùng nhau.
Họ và tên: độ dài không quá 100
Lớp: dãy ký tự không có khoảng trống (không quá 15)
Email: dãy ký tự không có khoảng trống (không quá 15)
*/
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
        string khoa;
        cin >> khoa;
        cout << "DANH SACH SINH VIEN KHOA " << khoa << ":" << "\n";
        for(int i=0;i<n;i++){
            if (sv[i].lop[1] == khoa[2] && sv[i].lop[2] == khoa[3])
                in(sv[i]);
        }
    }
    return 0;
}
