#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string name,lop,birth;
    float gpa;
};

istream& operator >> (istream &in, SinhVien &a){
    getline(in,a.name);
    getline(in,a.lop);
    in >> a.birth >> a.gpa;
    return in;
    }
ostream& operator << (ostream &out, SinhVien &a){
    out << "B20DCCN001" << " " << a.name << " " << a.lop << " ";
    if(a.birth[2] != '/') a.birth.insert(0, "0");
    if(a.birth[5] != '/') a.birth.insert(3, "0");
    out << a.birth << " " << fixed << setprecision(2) << a.gpa;
    return out;
    }
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
