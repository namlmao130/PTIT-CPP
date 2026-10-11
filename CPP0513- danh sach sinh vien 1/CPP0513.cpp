#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string msv,ten,lop,ngay;
    float gpa;
};
string chuanhoangay(string s)
{
    if(s[1] == '/' && s[3] == '/') s = "0" + s.substr(0,2) + "0" + s.substr(2);
    else if(s[2] != '/' && s[4] == '/') s = "0" + s;
    else if(s[2] == '/' && s[5] != '/') s.insert(3,"0");
    return s;
}
string MSV(int i)
{
    string s = to_string(i);
    while(s.length() < 3){
        s = "0" + s;
    }
    return "B20DCCN" + s;
}
void nhap(SinhVien ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        ds[i].msv = MSV(i+1);
        getline(cin,ds[i].ten);
        getline(cin , ds[i].lop);
        getline(cin ,ds[i].ngay);
        cin >> ds[i].gpa;
    }
}
void in(SinhVien ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        ds[i].ngay = chuanhoangay(ds[i].ngay);
        cout << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].ngay << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
