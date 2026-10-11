#include <bits/stdc++.h>
using namespace std;

int i=1;
struct SinhVien
{
    string msv = "B20DCCN";
    string name,lop,birth;
    float gpa;
};
string MSV(string s)
{
    string ss = to_string(i);
    while(s.length() < 10 - ss.length()) s = s + "0";
    s += ss;
    i++;
    return s;
}
istream& operator >> (istream &in, SinhVien &a){
    scanf("\n");
    getline(in,a.name);
    getline(in,a.lop);
    in >> a.birth >> a.gpa;
    return in;
    }
ostream& operator << (ostream &out, SinhVien &a){
    out << MSV(a.msv) << " " << a.name << " " << a.lop << " ";
    if (a.birth[1] == '/' && a.birth[3] == '/') a.birth = "0" + a.birth.substr(0,2) + "0" + a.birth.substr(2);
    else if(a.birth[1] != '/' && a.birth[4] == '/') a.birth.insert(3, "0");
    else if (a.birth[1] == '/') a.birth.insert(0, "0");
    out << a.birth << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
    }
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
