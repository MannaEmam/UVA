#include <stdio.h>
#include <stdlib.h>
long long int square_function(long long int x)
{
    long long int r,s;
    s = 0;
    r = 0;
    while(x % 10 != x)
    {
        r = x % 10;
        x = x / 10;
        s += (r * r);
    }
    s += (x * x);
    return s;
}
int main()
{
    long long int t,n,i,a;
    scanf("%lld",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%lld",&a);
        if(a % 10 == a)
            n = a * a;
            else
                n = a;
        while(n % 10 != n)
        {
            n = square_function(n);
        }
        if(n == 1)
            printf("Case #%lld: %lld is a Happy number.\n",i,a);
        else
           printf("Case #%lld: %lld is an Unhappy number.\n",i,a);
    }
    return 0;
}

