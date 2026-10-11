#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    string X1,X2;
    cin >> X1 >> X2;

    for(char &x : X1){
        if(x == '6') x='5';
    }
    for (char &x : X2){
        if(x== '6') x= '5';
    }
    long long Xmin = stoll(X1) + stoll(X2);
    cout << Xmin << " ";

    for(char &x : X1){
        if(x == '5') x='6';
    }
    for (char &x : X2){
        if(x== '5') x= '6';
    }
    long long Xmax = stoll(X1) + stoll(X2);
    cout << Xmax;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        testcase();
        cout << endl;
    }
    return 0;
}
