#include <bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238

struct ToaDo
{
    double x,y;
};
double Canh(ToaDo a, ToaDo b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

void nhap(ToaDo &a)
{
        cin >> a.x >> a.y;
}
double DienTichHinhTron(ToaDo a,ToaDo b,ToaDo c)
{
    double ab = Canh(a,b);
    double bc = Canh(b,c);
    double ac = Canh(a,c);
    double DienTichTamGiac = sqrt((ab+bc+ac)*(ab+bc-ac)*(bc+ac-ab)*(ac+ab-bc))*1/4;
    double BanKinh = ab*bc*ac/(4*DienTichTamGiac);
    return PI*pow(BanKinh,2);
}
bool cmp(double a,double b)
{
    return a < b;
}
bool check(ToaDo a[])
{
    float ab = Canh(a[0], a[1]);
    float bc = Canh(a[1], a[2]);
    float ca = Canh(a[2], a[0]);
    return (ab + bc > ca) && (bc + ca > ab) && (ca + ab > bc);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ToaDo a[3];
        for(int i=0;i<3;i++)
        {
            nhap(a[i]);
        }
        if(check(a)) cout << fixed << setprecision(3) << DienTichHinhTron(a[0],a[1],a[2]) << endl;
        else cout << "INVALID" << endl;
    }
    return 0;
}
