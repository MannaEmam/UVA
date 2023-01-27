#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char x,y;
    x = '*';
    y = '.';
                cout << int(x) << " " << int(y) << endl;
    while(scanf("%d",&n) == 1)
    {
        int i,a[n],b[n],flag;
        flag = 1;
        for( i = 0; i < n; i++)
            cin >> a[i];
        for(i= 0; i < n -1 ; i++)
        {
            b[i] = abs(a[i+1] - a[i]);
        }
        sort(b,b+i);
        for( i = 1; i < n; i++)
        {
            if(b[i] == b[i-1])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            cout << "Not jolly" << endl;
        else
            cout << "Jolly" << endl;
    }
    return 0;
}
