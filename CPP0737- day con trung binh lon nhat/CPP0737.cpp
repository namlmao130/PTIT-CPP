#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int curr_sum = 0;
    for(int i=0;i<k;i++) curr_sum += a[i];
    int start = 0;
    int max_sum = curr_sum;
    for(int i=1;i<=n-k;i++){
        curr_sum = curr_sum - a[i - 1] + a[i + k - 1];

        if(curr_sum > max_sum){
            max_sum = curr_sum;
            start = i;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout << a[start + i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        TestCase();
    }
    return 0;
}
