#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c) == 3)
    {
        if( a == b && b == c)
            printf("*\n");
        else if(b == c)
            printf("A\n");
        else if(a == c)
            printf("B\n");
        else if(a == b)
            printf("C\n");
        else
            printf("*\n");
    }
    return 0;
}
