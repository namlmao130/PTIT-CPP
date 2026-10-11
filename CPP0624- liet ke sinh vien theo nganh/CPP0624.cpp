#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string msv,ten,lop,Email;
};

void nhap(SinhVien &sv){
    scanf("\n");
    getline(cin, sv.msv);
    getline(cin , sv.ten);
    getline(cin, sv.lop);
    getline(cin, sv.Email);
}
string nganh(SinhVien a)
{
    string s = a.msv.substr(5,2);
    if(s == "KT"){
        string r = "Ke toan";
        return r;
    }
    else if(s == "CN"){
        string r = "Cong nghe thong tin";
        return r;
    }
    else if(s == "VT"){
        string r = "Vien thong";
        return r;
    }
    else if(s == "AT"){
        string r = "An toan thong tin";
        return r;
    }
    else if(s == "DT"){
        string r = "Dien tu";
        return r;
    }
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
        scanf("\n");
        string ng;
        getline(cin,ng);
        string temp = ng;
        transform(ng.begin(),ng.end(),ng.begin(), :: toupper);
        cout << "DANH SACH SINH VIEN NGANH " << ng << ":" << "\n";
        for(int i=0;i<n;i++){
            if(temp == "Cong nghe thong tin" || temp == "An toan thong tin"){
               if (nganh(sv[i]) == temp && sv[i].lop[0] != 'E')
                   in(sv[i]);
            }
            else {
                    if(nganh(sv[i]) == temp) in(sv[i]);
            }
        }
    }
    return 0;
}
