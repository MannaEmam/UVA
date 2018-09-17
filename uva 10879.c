#include <stdio.h>
#include <math.h>
int prime (int x)
{
    int l,check;
    check = 0;
    for(l = 2; l <= sqrt(x); l++)
    {
        if(x % l == 0)
       {
             check = 1;
        break;
       }
    }
  return check;
}
int main()
{
    int i,j,n,a,w,x,y,z,c,check;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&a);
        check = prime(a);
        if(check == 0)
        {
            w = a;
            x = 1;
            z = 0;
        }
        else if(check == 1)
        {
                    c = 0;
            for(j = 2; j <=  a; j++)
        {
                if(a % j == 0)
                {
                    if(c == 0)
                    {
                        w = j;
                        x = a / j;
                        c++;
                    }
                    else if(c == 1)
                    {
                        y = j;
                        z = a / j;
                        c++;
                    }
                }
                if(c == 2)
                    break;
            }
                        if(c == 1)
                        {
                            y = a;
                            z = 1;
                        }
        }
        printf("Case #%d: %d = %d * %d = %d * %d\n",i,a,w,x,y,z);
}
    return 0;
}

