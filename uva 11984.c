#include <stdio.h>
int main()
{
    int i,n,x,y;
    double c,t;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d",&x,&y);
        t = (9.0 * x) / 5.0 + 32;
        t = t + y;
        c = ((t - 32) * 5.0) / 9.0;
        printf("Case %d: %.2lf\n",i,c);
    }
    return 0;
}
