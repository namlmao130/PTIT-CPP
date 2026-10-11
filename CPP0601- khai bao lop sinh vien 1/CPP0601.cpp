#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string name,lop,birth;
    float gpa;

    void nhap(){
    getline(cin,name);
    getline(cin,lop);
    cin >> birth >> gpa;
    }
    void xuat(){
    cout << "B20DCCN001" << " " << name << " " << lop << " ";
    if (birth[1] == '/' && birth[3] == '/') birth = "0" + birth.substr(0,2) + "0" + birth.substr(2);
    else if(birth[1] != '/' && birth[4] == '/') birth.insert(3, "0");
    else if (birth[1] == '/') birth.insert(0, "0");
    cout << birth << " " << fixed << setprecision(2) << gpa;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
