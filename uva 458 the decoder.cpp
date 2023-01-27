#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char x;
    while(cin >> s)
    {
        for(int i = 0; i < s.length(); i++)
            {
                x = s[i] - 7;
                cout << x;
            }
            cout << endl;
    }
    return 0;
}
