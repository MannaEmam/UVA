#include <stdio.h>
int main()
{
    int s,d,f,n,b,c,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
        scanf("%d %d",&s,&f);
        if(s>=f&&(s+f)%2==0)
        {
            b=(s+f)/2;
            c=(s-f)/2;
            printf("%d %d\n",b,c);
        }
        else
            printf("impossible");

    }
    }
    return 0;
}
