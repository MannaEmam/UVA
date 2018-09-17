#include <stdio.h>
int main()
{
    float avg,s,sum,C,N,b,i;
    int a[1010],j;
    while(scanf("%f",&C)==1)
    {
        for(i=0;i<C;i++)
        {
             sum = 0,b=0,avg=0;
        scanf("%f",&N);
        for(j=0;j<N;j++)
       {
            scanf("%d",&a[j]);
            sum = sum + a[j];
       }
        avg = sum/N;
        for(j=0;j<N;j++)
        {
            if(a[j]>avg)
            {
                b=b+1;
            }
        }
        s = (100*b)/N;
        printf("%.3f%%\n",s);
    }
        }
    return 0;
}
