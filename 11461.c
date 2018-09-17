#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,i,d,flag;
    while(scanf("%d %d",&a,&b)==2)
    {

        if(a==0&&b==0)
            break;
        else
        {
            flag = 0;
            for(i=1;i<=sqrt(b);i++)
            {
            d=i*i;
                if(d>=a&&d<=b)
            {
                flag=flag+1;
            }
        }
        }
        printf("%d\n",flag);
    }

    return 0;
}
