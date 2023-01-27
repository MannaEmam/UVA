#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (cin >> t && t != 0)
    {
        double a[t],avg = 0,temp,total = 0,value = 0;
        int i,test,n = 0;
        for(i = 0; i < t; i++)
        {
            cin >> a[i];
            avg += a[i];
        }
        avg /= t;
        if(t == 1)
        {
            cout << fixed << setprecision(2) << "$" << avg << endl;
            continue;
        }
        for(i = 0; i < t; i++)
        {
            temp = avg - a[i];
            if(temp > 0)
            {
                test = floor(temp);
                total += test;
                n = floor ( (temp - test) * 100 );
            }
        }
        value = n / 100.00;
        total += value;
        cout << fixed << setprecision(2) << "$" << total << endl;
    }
    return 0;
}
