#include <bits/stdc++.h>
using namespace std;

struct ThiSinh{
    string name;
    string birthday;
    float a;
    float b;
    float c;
};

void nhap(ThiSinh &A)
{
    getline(cin,A.name);
    getline(cin,A.birthday);
    cin >> A.a >> A.b >> A.c;
}
void in(ThiSinh &A)
{
    cout << A.name << " " << A.birthday << " " << fixed << setprecision(1) <<(float) A.a + A.b + A.c;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
