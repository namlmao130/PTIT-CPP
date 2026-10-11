#include <bits/stdc++.h>
using namespace std;

class SinhVien {
public:
    string msv, ten, lop, email;

    friend istream &operator >> (istream &is, SinhVien &a) {
        scanf("\n");
        getline(cin, a.msv);
        getline(cin, a.ten);
        getline(cin, a.lop);
        getline(cin, a.email);
        return is;
    }

    friend ostream &operator << (ostream &os, SinhVien a) {
        cout << a.msv << " " << a.ten << " " << a.lop << " " << a.email << "\n";
        return os;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    return a.msv < b.msv;
}

int main() {
    SinhVien a[1000];
    int i=0;
    while(cin >> a[i]){
        i++;
    }
    sort(a, a + i, cmp);
    for (int j = 0; j < i; ++j) {
        cout << a[j];
    }
    return 0;
}
