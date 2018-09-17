#include <stdio.h>
int main()
{
    int i,j,k,sum,avg,count,n,h[100];
    k = 1;
    while(1)
    {
        sum=0;
        count=0;
        scanf("%d",&n);
        if(n==0)
        break;
        for(i = 0; i<n; i++)
            scanf("%d",&h[i]);
        for(i = 0; i<n; i++)
            sum = sum + h[i];
        avg = sum / n;
        for(i = 0; i<n; i++)
        {
            if(h[i]>avg)
                count = count + (h[i]-avg);
        }

        printf("Set #%d\nThe minimum number of moves is %d.\n\n",k,count);
        k++;
    }
    return 0;
}
