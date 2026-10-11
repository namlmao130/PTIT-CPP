#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        int a[n][3];
        int hang=0;
        for(int i=0;i<n;i++)
        {
            int bang1=0;
            for (int j=0;j<3;j++){
                cin >> a[i][j];
                if(a[i][j]==1) bang1++;
            }
            if(bang1 >=2) hang++;
        }
        cout << hang;
    return 0;
}
