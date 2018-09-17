#include <stdio.h>
int main()
{
    int m,n,r;
    while(scanf("%d %d",&m,&n) == 2)
    {
        r = (m * n) - 1;
        printf("%d\n",r);
    }
    return 0;
}
