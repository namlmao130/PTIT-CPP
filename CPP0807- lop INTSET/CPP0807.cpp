#include <bits/stdc++.h>
using namespace std;

class IntSet
{
private:
    set<int> data;
public:
    IntSet() {}
    IntSet(int a[],int n){
        for(int i=0;i<n;i++) data.insert(a[i]);
    }
    IntSet Intersection(IntSet s2){
        IntSet res;
        for(int x : this->data){
            if(s2.data.count(x)) res.data.insert(x);
        }
        return res;
    }
    void print(){
        for(int x : data) {
            cout << x << " ";
        }
        cout << endl;
    }
};
int main()
{
    freopen("DATA.in", "r" ,stdin);
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];

    IntSet s1(a,n);
    IntSet s2(b,m);
    IntSet ans = s1.Intersection(s2);
    ans.print();

    return 0;
}
