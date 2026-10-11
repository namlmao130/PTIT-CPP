#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream file("DATA.in");
    int a[100000];
    vector<int> b(1000,0);

    int n;
    while(file >> n){
        b[n]++;
    }
    for(int i=0;i<1000;i++)
    {
        if(b[i] != 0) cout << i << " " << b[i] << endl;
    }
    return 0;
}
