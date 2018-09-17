#include <stdio.h>
int main()
{
    long long int p,n,c,i;
    c = 0;
    while(scanf("%lld",&n) == 1)
    {
        if(n < 0)
            break;
            c++;
            p = 1;
            i = 0;
             if(n == 1)
            {
               printf("Case %lld: %lld\n",c,i);
               continue;
            }
        for( ; ; )
        {
            p *= 2;
            i++;
            if (p >= n)
                break;
        }
        printf("Case %lld: %lld\n",c,i);
    }
    return 0;
}
