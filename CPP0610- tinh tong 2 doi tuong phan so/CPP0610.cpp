#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
private:
    long long tu,mau;
public:
    PhanSo(long long t=0,long long m=1)
    {
        tu=t;
        mau=m;
    }
    void rutgon()
    {
        long long uc = __gcd(tu,mau);
        tu /= uc;
        mau /= uc;
    }

    friend istream &operator >> (istream &in, PhanSo &a)
    {
        return in >> a.tu >> a.mau;
    }
    friend ostream &operator << (ostream &out , PhanSo a)
    {
        return out << a.tu << "/" << a.mau;
    }
    PhanSo operator + (PhanSo b)
    {
        PhanSo a;
        a.tu = tu * b.mau + mau * b.tu;
        a.mau = mau * b.mau;
        a.rutgon();
        return a;
    }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
