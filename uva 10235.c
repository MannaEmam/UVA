#include <stdio.h>
#include <math.h>
long long int summing_function(long long int x)
{
   long long int s,r,t;
   s = 0;
   r = 0;
   t = x;
   while(x % 10 != x)
   {
        r = (x % 10);
        s += r;
        s *= 10;
       x = x / 10;
   }
   s += x;
   if(s == t)
    s = 0;
   return s;
}
int main()
{
    long long int i,n,c1,reverse;
    while(scanf("%lld",&n) == 1)
    {
        c1 = 0;
        for(i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                printf("%lld is not prime.\n",n);
                c1++;
                break;
            }
        }
        if(c1 == 0)
        {
            reverse = summing_function(n);
            if(reverse == 0)
            {
                printf("%lld is prime.\n",n);
                c1++;
            }
        for(i = 2; i <= sqrt(reverse); i++)
        {
            if(reverse % i == 0)
            {
                printf("%lld is prime.\n",n);
                c1++;
                break;
            }
        }
        }
        if(c1 == 0)
           printf("%lld is emirp.\n",n);
    }
}
