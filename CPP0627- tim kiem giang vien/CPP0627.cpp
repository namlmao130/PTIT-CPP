#include <bits/stdc++.h>
using namespace std;

class GiangVien {
public:
    string mgv, hoTen, boMon, ten, mon;

    friend istream &operator >> (istream &is, GiangVien &a) {
        scanf("\n");
        getline(cin, a.hoTen);
        getline(cin, a.boMon);

        string s, res = "";
        stringstream ss(a.boMon);
        while (ss >> s) {
            res += toupper(s[0]);
        }
        a.mon = res;

        return is;
    }

    friend ostream &operator << (ostream &os, GiangVien a) {
        cout << a.mgv << " " << a.hoTen << " " << a.mon << "\n";
        return os;
    }
};

int main() {
    int n;
    cin >> n;
    GiangVien a[100];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        a[i].mgv = "GV" + to_string(i + 1);
        if (i + 1 < 10)
            a[i].mgv.insert(2, "0");
    }

    int q;
    cin >> q;
    scanf("\n");
    while (q--) {
        string str;
        getline(cin, str);

        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << str << ":\n";
        for (int i = 0; i < n; ++i) {
                string s1 = "";
             for(int j=0;j<a[i].hoTen.length();j++)
             {
                 s1 += tolower(a[i].hoTen[j]);
             }
             transform(str.begin(),str.end(),str.begin(), :: tolower);
            if (s1.find(str) != string::npos)
                cout << a[i];
        }
    }
    return 0;
}
