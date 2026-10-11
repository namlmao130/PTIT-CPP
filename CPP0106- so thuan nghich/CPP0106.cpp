#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
    string c;
    cin >> c;
    string rev = c;
    reverse(rev.begin(),rev.end());
    if (rev == c) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
}
