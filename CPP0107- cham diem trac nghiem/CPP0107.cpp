#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string ma101 = "ABBADCCABDCCABD";
    string ma102 = "ACCABCDDBBCDDBB";
    while (t--)
    {
        int ma;
        cin >> ma;
        string s= "";
        for (int i=0;i<15;i++)
        {
            char x;
            cin >> x;
            s += x;
        }
        double score=0;
        if (ma == 101)
        {
            for (int i=0;i<15;i++)
                if(s[i] == ma101[i]) score ++;
        }
        else if( ma == 102)
        {
            for (int i=0;i<15;i++)
                if(s[i] == ma102[i]) score ++;
        }
        cout << fixed << setprecision(2) << score * 10 / 15 << endl;
    }
    return 0;
}
