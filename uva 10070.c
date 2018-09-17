#include<stdio.h>
int main()
{
    long long y;
    int l,b,h;
    while(scanf("%lld",&y) == 1)
    {
        l = 0;
        h = 0;
        b = 0;
        if((y % 4 == 0 && y % 100 != 0) || ( y % 400==0 && y % 100 == 0) )
        {
            l++;
            if(y%55 == 0)
            b++;
            if(y%15 == 0)
            {
                h++;
            }
        }
        else if(y%15 == 0)
            h++;

        if(l == 1 && h == 0 && b == 0)
        {
            printf("This is leap year.\n");
            printf("\n");
        }
        else if(l == 1 && h == 1 && b == 1)
        {
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n");
            printf("This is buluculu festival year.\n");
            printf("\n");
        }
        else if(l == 1 && h == 1 && b == 0)
        {
            printf("This is leap year.\n");
            printf("This is huluculu festival year.\n");
            printf("\n");
        }
        else if(l == 1 && h == 0 && b == 1)
        {
            printf("This is leap year.\n");
            printf("This is buluculu festival year.\n");
            printf("\n");
        }
                else if(l == 0 && h == 1 && b == 0)
        {
            printf("This is huluculu festival year.\n");
            printf("\n");
        }
        else if(l == 0 && h == 0 && b == 0)
        {
                    printf("This an ordinary year.\n");
                    printf("\n");
        }
    }
    return 0;
}
