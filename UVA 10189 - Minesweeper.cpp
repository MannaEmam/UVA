#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,c,f;
    c = 0;
    f = 0;
    while(cin >> m >> n && m != 0 && n != 0)
    {
        c++;
        int b[150][150] = {0};
        char a[150][150];
        for(i = 0; i < m ;  i++)
        {
            for(j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if(a[i][j] == '*')
                {
                    b[i][j+1]++;
                    b[i][j-1]++;
                    b[i+1][j]++;
                    b[i-1][j]++;
                    b[i+1][j+1]++;
                    b[i+1][j-1]++;
                    b[i-1][j+1]++;
                    b[i-1][j-1]++;
                }
            }
        }
        if(f != 0)
            cout << endl;
        f++;
        cout << "Field #" << c <<":" << endl;;
        for(i = 0; i < m ; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(a[i][j] == '*')
                    cout << a[i][j];
                else
                cout << b[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
