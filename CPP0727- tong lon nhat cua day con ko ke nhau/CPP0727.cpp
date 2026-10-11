#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    if(n == 1){
        cout << a[0];
        return;
    }
    long long curr_max = 0; // 0 -> i-1;
    long long prev_max = 0; // 0 -> i-2 ;
    for(int i=0;i<n;i++){
        long long new_max = max(curr_max, prev_max + a[i]);
        prev_max = curr_max;
        curr_max = new_max;
    }
    cout << curr_max << endl;
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
