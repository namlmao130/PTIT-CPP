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
string chuanhoa(string s)
{
    string r= "";
    stringstream ss(s);
    while(ss >> s)
    {
        transform(s.begin(),s.end(),s.begin(), :: tolower);
        s[0]= toupper(s[0]);
        r += s + " ";
    }
    r.pop_back();
    return r;
}
ostream& operator << (ostream &out, SinhVien &a){
    a.name = chuanhoa(a.name);
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
