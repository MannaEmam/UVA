#include <stdio.h>
int main()
{
    long long int a,b,sub;
    while (scanf("%lld %lld",&a,&b)==2)
    {
        if(a>b)
            sub = a - b;
        else
            sub = b - a;
        printf("%lld\n",sub);
    }
    return 0;
}
