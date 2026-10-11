#include <bits/stdc++.h>
using namespace std;

int id = 1;

class SinhVien {
public:
    string msv, ten, lop, nsinh;
    float gpa;

    friend istream &operator >> (istream &is, SinhVien &a) {
        scanf("\n");
        getline(is, a.ten);
        is >> a.lop >> a.nsinh >> a.gpa;

        transform(a.ten.begin(),a.ten.end(),a.ten.begin(), :: tolower);
        string tmp,name = "";
        stringstream ss(a.ten);
        while(ss >> tmp)
        {
            tmp[0] = toupper(tmp[0]);
            name += tmp + " ";
        }
        name.pop_back();
        a.ten = name;

        string s = to_string(id++);
        while (s.length() < 3)
            s = '0' + s;
        a.msv = "B20DCCN" + s;

        if (a.nsinh[2] != '/') a.nsinh.insert(0, "0");
        if (a.nsinh[5] != '/') a.nsinh.insert(3, "0");
        return is;
    }
    friend ostream &operator << (ostream &os, SinhVien a) {
        os << a.msv << " " << a.ten << " " << a.lop << " " << a.nsinh << " ";
        os << fixed << setprecision(2) << a.gpa << "\n";
        return os;
    }
};

bool cmp(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
