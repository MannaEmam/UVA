#include <stdio.h>
int main()
{
    long long int i,n,s;
   while( scanf("%lld",&n) == 1)
    {
        s = 0;
    for(i = 1;i <= n;i++)
    {
        if(i % 2 == 0)
            s += i;
        else if(i % 2 != 0)
            s -= i;
    }
    printf("%lld\n",s);
    }
    return 0;
}
