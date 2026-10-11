#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
    string s;
    cin >> s;
    string rac="084";
    size_t rec;
    while ((rec = s.find(rac)) != string::npos) {
        s.erase(rec, rac.length());
    }
    cout << s << endl;
    }
    return 0;
}
