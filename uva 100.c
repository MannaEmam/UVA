#include<stdio.h>
int main()
{
    int x,y,i,j,count,max,n;
    while(scanf("%d%d",&x,&y)==2 && x>0 && y>0)
    {
       max = 0;
       printf("%d %d ",x,y);
       if(x>y)
       {
           n=y;
           y=x;
           x=n;

       }

       for(i=x;i<=y;i++)
       {
           count = 1;
           for(j=i;j!=1;j=j)
           {
               if(j%2==0)
               j=j/2;
               else
                j =(3*j) + 1;
               count++;

           }
           if(count>max)
            max = count;
       }

        printf("%d\n",max);
    }
    return 0;
}
