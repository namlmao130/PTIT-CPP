#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 1000005;
int d[MAX_N];      // d[i]: số lượng ước của i
int cnt[MAX_N];    // cnt[i]: số mũ của thừa số nguyên tố nhỏ nhất trong phân tích của i
vector<int> primes; // Danh sách các số nguyên tố
bool is_composite[MAX_N]; // Đánh dấu hợp số

void linearSieve() {
    d[1] = 1;
    for (int i = 2; i < MAX_N; ++i) {
        if (!is_composite[i]) {
            primes.push_back(i);
            d[i] = 2;       // Số nguyên tố có 2 ước
            cnt[i] = 1;     // Mũ của nó là 1 (p^1)
        }
        for (int p : primes) {
            if (i * p >= MAX_N) break;

            is_composite[i * p] = true;

            if (i % p == 0) {
                // p là ước nguyên tố nhỏ nhất của i
                // Công thức: d(n * p) = d(n) / (a + 1) * (a + 2)
                // với a là số mũ của p trong n
                d[i * p] = d[i] / (cnt[i] + 1) * (cnt[i] + 2);
                cnt[i * p] = cnt[i] + 1;
                break; // Dừng lại để đảm bảo tính chất tuyến tính (mỗi số chỉ xét 1 lần)
            } else {
                // p nhỏ hơn mọi ước nguyên tố của i (nguyên tố cùng nhau)
                // Hàm nhân tính: d(i * p) = d(i) * d(p) = d(i) * 2
                d[i * p] = d[i] * 2;
                cnt[i * p] = 1;
            }
        }
    }
}

void solve() {
    int N;
    cin >> N;
    cout << d[N] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    linearSieve(); // Chạy O(N)

    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }
    return 0;
}
