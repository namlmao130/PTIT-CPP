#include <bits/stdc++.h>
using namespace std;

int maKH = 1;
int maMH = 1;
int maHD = 1;

class KhachHang
{
public:
    string ma,ten,gt,ns,dc;
    friend istream &operator >> (istream &is, KhachHang &a);
};
class MatHang
{
public:
    string ma,ten,dv;
    int mua,ban;
    friend istream &operator >> (istream &is, MatHang &a);
};
vector<KhachHang> dsKH;
vector<MatHang> dsMH;
istream &operator >> (istream &is, KhachHang &a)
{
        string m = "KH";
        string c = to_string(maKH++);
        while(m.length() < 5 - c.length()) m = m + "0";
        m += c;
        a.ma = m;

        scanf("\n");
        getline(is,a.ten);
        getline(is,a.gt);
        getline(is,a.ns);
        getline(is,a.dc);

        dsKH.push_back(a);
        return is;
}
istream &operator >> (istream &is, MatHang &a)
{
        string m = "MH";
        string c = to_string(maMH++);
        while(m.length() < 5 - c.length()) m = m + "0";
        m += c;
        a.ma = m;

        scanf("\n");
        getline(is,a.ten);
        getline(is,a.dv);
        is >> a.mua;
        is >> a.ban;

        dsMH.push_back(a);
        return is;
}
class HoaDon
{
public:
    string ma,kh,mh;
    int Soluong;

    friend istream &operator >> (istream &is, HoaDon &a)
    {
        string m = "HD";
        string c = to_string(maHD++);
        while(m.length() < 5 - c.length()) m = m + "0";
        m += c;
        a.ma = m;

        scanf("\n");
        is >> a.kh >> a.mh >> a.Soluong;
        return is;
    }

    friend ostream &operator << (ostream &os, HoaDon a)
    {
        int N = maKH - 1;
        int M = maMH -1;
        KhachHang khach;
        MatHang hang;
        for (int i = 0; i < N; i++) {
            if (dsKH[i].ma == a.kh) {
                khach = dsKH[i];
                break;
            }
        }
        for (int i = 0; i < M; i++) {
            if (dsMH[i].ma == a.mh) {
                hang = dsMH[i];
                break;
            }
        }
        int s = a.Soluong * hang.ban;
        os << a.ma << " " << khach.ten << " " << khach.dc << " " << hang.ten << " " << hang.dv << " " << hang.mua << " " << hang.ban << " " << a.Soluong << " " << s << endl;
        return os;
    }
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
