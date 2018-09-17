#include <stdio.h>
int main()
{
 long long  int n,r,s;
    while(scanf("%lld",&n) == 1)
    {
      if(n == 0)
        break;
      r = 0;
      while(n)
      {
         s = n*n;
         r += s;
         n--;
      }
      printf("%lld\n",r);
    }
    return 0;
}
