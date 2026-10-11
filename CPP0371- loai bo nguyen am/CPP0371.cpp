#include <bits/stdc++.h>
using namespace std;
int main()
{

        string s;
        getline(cin,s);
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for (int i=0;i<s.length();){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') s.erase(i,1);
            else i++;
        }
        for (auto x :s){
            cout << "." << x;
        }
    return 0;
}
