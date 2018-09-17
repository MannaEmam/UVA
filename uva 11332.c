#include <stdio.h>
long long int summing_function(long long int x)
{
   long long int s;
   s = 0;
   while(x % 10 != x)
   {
       s += (x % 10);
       x = x / 10;
   }
   s += x;
   return s;
}
int main()
{
    long long int n;
    while(scanf("%lld",&n) == 1)
    {
        if(n == 0)
            break;
        while(n % 10 != n)
        n = summing_function(n);
        printf("%lld\n",n);
    }
    return 0;
}
