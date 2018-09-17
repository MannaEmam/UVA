#include <stdio.h>
int main()
{
    long long int a,l,c,n,b;
    c = 0;
    while(1)
    {
        scanf("%lld %lld",&a,&l);
        if(a == -1 && l == -1)
            break;
        b = a;
        c++;
        n = 0;
        while(1)
        {
           if(a == 1)
           {
               n++;
               break;
           }
           else if(a % 2 == 0)
           {
               a = a / 2;
               n++;
           }
           else
           {
               a = a * 3 + 1;
               n++;
               if(a >= l)
               {
                   break;
               }
           }
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",c,b,l,n);
    }
    return 0;
}
