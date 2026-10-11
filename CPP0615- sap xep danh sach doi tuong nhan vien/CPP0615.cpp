#include <bits/stdc++.h>
using namespace std;

int id=1;
class NhanVien
{
public:
    string ma,ten,gt,dc,thue,ngay;
    int d,m,y;
    friend istream &operator >> (istream &is, NhanVien &a)
    {
        string s = to_string(id++);
        while(s.length() < 5) s = "0" + s;
        a.ma = s;

        scanf("\n");
        getline(is, a.ten);
        getline(is, a.gt);
        scanf("%d/%d/%d\n",&a.m,&a.d,&a.y);
        getline(is, a.dc);
        getline(is, a.thue);
        getline(is, a.ngay);

        return is;
    }
    friend ostream &operator << (ostream &os ,NhanVien a)
    {
        os << a.ma << " " << a.ten << " " << a.gt << " ";
        if(a.m < 10 && a.d < 10) printf("0%d/0%d/%d ",a.m,a.d,a.y);
        else if(a.m < 10 && a.d >= 10) printf("0%d/%d/%d ",a.m,a.d,a.y);
        else if(a.d < 10 && a.m >= 10) printf("%d/0%d/%d ",a.m,a.d,a.y);
        else printf("%d/%d/%d ",a.m,a.d,a.y);
        os << a.dc << " " << a.thue << " " << a.ngay << endl;
        return os;
    }
};
bool cmp(NhanVien a,NhanVien b)
{
    if (a.y < b.y) return 1;
    if (a.y == b.y) {
        if (a.m < b.m) return 1;
        if (a.m == b.m)  {
            if (a.d < b.d) return 1;
        }
    }
    return 0;
}
void sapxep(NhanVien ds[],int n)
{
    sort(ds,ds+n,cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
