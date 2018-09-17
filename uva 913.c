#include <stdio.h>
int main()
{
    long long int n,s,i,j,k;
    while(scanf("%lld",&n) == 1)
    {
        k = 1;
        for(i = 3; i <= n; i += 2)
        {
            for(j = 0; j < i; j ++)
             {
                 k += 2;
             }
        }
         s = k + (k - 2) + (k -4);
         printf("%lld\n",s);
    }
    return 0;
}
