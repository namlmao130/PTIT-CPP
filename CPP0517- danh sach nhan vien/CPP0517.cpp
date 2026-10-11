#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string name,sex,birth,local,code,date;
};
void nhap(NhanVien &ds)
{
    scanf("\n");
    getline(cin,ds.name);
    getline(cin,ds.sex);
    getline(cin,ds.birth);
    getline(cin,ds.local);
    getline(cin,ds.code);
    getline(cin,ds.date);
}
string STT(int i)
{
    string r = to_string(i);
    while (r.length() < 5)
        r = '0' + r;
    return r;
}
void inds(NhanVien ds[],int n)
{
    for (int i=0;i<n;i++){
    cout << STT(i+1) << " " << ds[i].name << " " << ds[i].sex << " " << ds[i].birth << " " << ds[i].local << " " << ds[i].code << " " << ds[i].date ;
    cout << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
