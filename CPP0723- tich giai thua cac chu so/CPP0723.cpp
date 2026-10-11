#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    cin.ignore();
    string a;
    getline(cin,a);
    int d[10]={0};
    for (auto x: a)
    {
        if(x == '2') d[2]++;
        else if(x == '3') d[3]++;
        else if(x == '4') d[2]+=2,d[3]++;
        else if(x == '5') d[5]++;
        else if(x == '6') d[5]++, d[3]++;
        else if(x == '7') d[7]++;
        else if(x == '8') d[2]+=3, d[7]++;
        else if(x == '9') d[3]+=2, d[7]++, d[2]++;
    }
    for (int i=9;i>=2;i--)
    {
        for (int j=0;j<d[i];j++)
        {
            cout << i;
        }
    }
    cout << endl;
    }
    return 0;
}
