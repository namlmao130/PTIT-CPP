#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in("VANBAN.in");
    string temp;
    map<string,int> s;
    while(in >> temp)
    {
        transform(temp.begin(),temp.end(),temp.begin(), :: tolower);
        s[temp]++;
    }
    for(auto x : s) cout << x.first << endl;

    in.close();
    return 0;
}
