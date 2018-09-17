#include <stdio.h>
int main()
{
    int t;
    while(scanf("%d",&t) == 1)
    {
        t = t % 6;
        if(t == 0)
         printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
