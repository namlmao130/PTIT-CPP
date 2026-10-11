#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string name,sex,birth,local,code,date;
};
void nhap(NhanVien &a)
{
    getline(cin,a.name);
    getline(cin,a.sex);
    getline(cin,a.birth);
    getline(cin,a.local);
    getline(cin,a.code);
    cin >> a.date;
}
void in(NhanVien a)
{
    cout << "00001" << " " << a.name << " " << a.sex << " " << a.birth << " " << a.local << " " << a.code << " " << a.date ;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
