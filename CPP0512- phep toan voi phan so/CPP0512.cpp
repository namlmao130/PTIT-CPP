#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    long long tu, mau;
    void reduce()
    {
        long long g=__gcd(tu,mau);
        tu /= g;
        mau /= g;
    }
};
PhanSo sum(PhanSo a,PhanSo b)
{
    PhanSo tong;
    tong.tu = a.tu*b.mau + a.mau*b.tu;
    tong.mau = a.mau*b.mau;
    tong.reduce();
    return tong;
}
PhanSo mul(PhanSo a,PhanSo b)
{
    PhanSo tich;
    tich.tu = a.tu * b.tu;
    tich.mau = a.mau * b.mau;
    tich.reduce();
    return tich;
}
void process(PhanSo &a,PhanSo &b)
{
    PhanSo c = mul(sum(a,b),sum(a,b));
    PhanSo d = mul(mul(a,b),c);
    cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
