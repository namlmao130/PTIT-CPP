#include <bits/stdc++.h>
using namespace std;

int n,k;
struct Data{
    int value;
    int id;
};

bool cmp(Data a, Data b){
    if(abs(k - a.value) < abs(k - b.value)) return 1;
    if(abs(k - a.value) == abs(k - b.value) && a.id < b.id) return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Data a[n];
        for (int i=0;i<n;i++){
                cin >> a[i].value;
                a[i].id = i;
        }
        sort(a,a+n,cmp);
        for(auto x : a){
            cout << x.value << " ";
        }
        cout << endl;
    }
    return 0;
}
