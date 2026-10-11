#include <bits/stdc++.h>
using namespace std;
vector<long long> f;
void fibonacci()
{
    f.assign({0, 1, 1});
    for (int i = 3; i <= 92; ++i)
        f.push_back(f[i - 1] + f[i - 2]);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        fibonacci();
        cout << f[n] << endl;
    }
    return 0;
}
