#include <bits/stdc++.h>
using namespace std;

bool allzero(vector<int> a)
{
    for(int &x : a){
        if(x != 0) return 0;
    }
    return 1;
}
void TestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int res = 0;
    while(!allzero(a)){
        for(int i=0;i<n;i++){
            if(a[i] % 2 ==1){
                a[i]--;
                res++;
            }
        }
        if(allzero(a)) break;
        for(int &x : a) x /= 2;
        res++;
    }
    cout << res << endl;
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
