#include <stdio.h>
int main()
{
    int i,n,k,p,j,t;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d %d %d",&n,&k,&p);
            for(j=1;j<=p;j++)
            {
                if(k==n||k>n)
                    k = 1;
                else
                    k++;
            }
            printf("Case %d: %d\n",i,k);
    }
        }

    return 0;
}
