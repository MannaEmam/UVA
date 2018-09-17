#include <stdio.h>
int summing_function(int x)
{
   int s;
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
    int i,t,n,sum,A[4],j,b;
    scanf("%d",&t);
    while(t != 0)
    {
        sum = 0;
        for(i = 0; i < 4; i++)
            scanf("%d",&A[i]);
        for(i = 0; i < 4; i++)
        {
            b = A[i];
            for(j = 1; j <= 4; j++)
            {
                n = b % 10;
                b = b / 10;
                if(j == 1)
                {
                    sum += n;
                    continue;
                }
                if(j % 2 == 0)
            {
                n *= 2;
                n = summing_function(n);
                sum += n;
            }
            else if(i % 2 != 0)
            {
                sum += n;
            }
            }
        }
        if(sum % 10 == 0)
            printf("Valid\n");
        else
            printf("Invalid\n");
        t--;
    }
    return 0;
}
