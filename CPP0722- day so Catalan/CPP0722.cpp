#include <bits/stdc++.h>
using namespace std;

long long factorial(int n){
    vector<long long> ans(n + 1, 0);
    ans[0] = ans[1] = 1;
    for(int i = 2; i <= n; i++){
        ans[i] = ans[i - 1] * i;
    }
    return ans[n];
}

long long Catalan(int n){
    long long numerator = factorial(2 * n);
    long long denominator = factorial(n) * factorial(n + 1);
    return numerator / denominator;
}

long long Solve(int n){
    if(n == 0) return 1;
    if(n == 1) return 2;
    long long sum = 0;
    for(int k = 0; k <= n; k++){
        sum += Catalan(k) * Catalan(n - k);
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << Solve(n) << endl;
    return 0;
}
