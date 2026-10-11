#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string name,lop,birth;
    float gpa;
};
void nhap(SinhVien &s)
{
    getline(cin,s.name);
    getline(cin,s.lop);
    cin >> s.birth >> s.gpa;
}
void in(SinhVien s)
{
    cout << "B20DCCN001" << " " << s.name << " " << s.lop << " ";
    if (s.birth[1] == '/' && s.birth[3] == '/') s.birth = "0" + s.birth.substr(0,2) + "0" + s.birth.substr(2);
    else if(s.birth[1] != '/' && s.birth[4] == '/') s.birth.insert(3, "0");
    else if (s.birth[1] == '/') s.birth.insert(0, "0");
    cout << s.birth << " " << fixed << setprecision(2) << s.gpa;
}
int main() {
	struct SinhVien a;
	nhap(a);
	in(a);
	return 0;
}
