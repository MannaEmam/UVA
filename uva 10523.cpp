#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  i,a,n,s;
    while(1)
    {
        cin>>n>>a;
        s = 0;
        for(i = 1; i <= n; i++)
        {
            s += (i * pow(a,i));
        }
        cout<<s<<endl;
    }
    return 0;
}
