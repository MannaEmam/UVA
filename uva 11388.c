#include<stdio.h>
int main()
{
 long long int a,b,gcd,lcm,n,t,x,y;

  while(scanf("%lld",&n)==1)
    while(n--)
  {
      {
        scanf("%lld %lld",&a,&b);
        x = a;
        y = b;
        if(a==0)
        gcd = a;
        else if(b==0)
        {
            gcd = b;
        }
        else

        {
            while(b!=0)
            {
                t = b;
                b = a%b;
                a=t;
            }
            gcd = a;
            lcm = (x*y) / gcd;
            if(lcm == y && gcd == x)
            {
                printf("%lld %lld\n",x,y);
            }
            else
            {
                printf("-1\n");
            }
        }
  }


    }
    return 0;
}
