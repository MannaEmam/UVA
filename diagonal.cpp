#include <iostream>
using namespace std;
#define max 1000000
double factorial(double x)
{
    double  s = 1;

    return s;
}
int main()
{
    double n,i,j,t1,t2,temp;
    for(i = 1; i < 1001; i++)
    {
        cin>>n;
        if(n == 0)
            break;
        j = 4;
        while(1)
        {
            temp = j - 2;
            t1 = factorial(j);
            t2 = factorial(temp);
            temp = (t1 / (t2 * 2)) - j;
            if(temp >= n)
                break;
                j++;
        }
       cout<<j<<endl;
    }
    return 0;
}

