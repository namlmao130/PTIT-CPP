#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void sum(int &num)
{
    int sum=0;
    while(num !=0 )
    {
        sum += num %10;
        num /= 10;
    }
    num = sum;
}

void TestCase()
{
    string a;
    cin >> a;
    int s=0;
    for( auto x : a)
    {
        s += x-'0';
    }
    while(s >= 10){
        sum(s);
    }
    cout << (s==9) << endl;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
        TestCase();
    return 0;
}
