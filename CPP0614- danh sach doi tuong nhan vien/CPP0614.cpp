#include <bits/stdc++.h>
using namespace std;

int id=1;
class NhanVien
{
public:
    string ma,ten,gt,ns,dc,thue,ngay;
    friend istream &operator >> (istream &is, NhanVien &a)
    {
        string s = to_string(id++);
        while(s.length() < 5) s = "0" + s;
        a.ma = s;

        scanf("\n");
        getline(is, a.ten);
        getline(is, a.gt);
        getline(is, a.ns);
        getline(is, a.dc);
        getline(is, a.thue);
        getline(is, a.ngay);
        return is;
    }
    friend ostream &operator << (ostream &os ,NhanVien a)
    {
        os << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.thue << " " << a.ngay << endl;
        return os;
    }
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
