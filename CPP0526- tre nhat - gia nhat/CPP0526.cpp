#include <bits/stdc++.h>
using namespace std;

struct DanhSach {
    string name;
    int d, m, y;
};

void nhap(DanhSach &ds) {
    scanf("\n");
    cin >> ds.name;
    scanf("%d/%d/%d", &ds.d, &ds.m, &ds.y);
}

bool cmp(DanhSach a, DanhSach b) {
    if (a.y != b.y) return a.y < b.y;
    if (a.m != b.m) return a.m < b.m;
    return a.d < b.d;
}

void sapxep(DanhSach ds[], int n) {
    sort(ds, ds + n, cmp);
}

void in(DanhSach ds[], int n) {
    cout << ds[n - 1].name << endl;
    cout << ds[0].name;
}

int main() {
    int n;
    cin >> n;
    DanhSach ds[n];
    for (int i = 0; i < n; i++) nhap(ds[i]);
    sapxep(ds, n);
    in(ds, n);
    return 0;
}
