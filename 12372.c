#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,l,w,h,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d %d %d",&l,&w,&h);
            if(l<=20&&w<=20&&h<=20)
            {
                printf("Case %d: good\n",i);
            }
            else
            {
                printf("Case %d: bad\n",i);
            }
        }
    }
    return 0;
}
