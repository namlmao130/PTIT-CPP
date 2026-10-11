#include <bits/stdc++.h>
using namespace std;

struct PhanSo
{
    long long tu,mau;
};
void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}
PhanSo tong(PhanSo p,PhanSo q)
{
    PhanSo t;
    t.tu = p.tu * q.mau + p.mau * q.tu;
    t.mau = p.mau * q.mau;
    return t;
}
void in(PhanSo p)
{
    long long d= __gcd(p.tu,p.mau);
    p.tu /= d;
    p.mau /= d;
    cout << p.tu << "/" << p.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
