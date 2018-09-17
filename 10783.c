#include <stdio.h>
int main()
{
    int i,j,n,x,y,s;
    while(scanf("%d",&n)==1)
    {

        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&x,&y);
            s = 0;
            for(j=x;j<=y;j++)
            {
                if(j%2==0)
                    continue;
                else

                {
                    s = s + j;
                }
            }
            printf("Case %d: %d\n",i,s);

        }
    }
return 0;
}

