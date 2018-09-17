#include <stdio.h>
int main()
{

    int s,n;
    while(scanf("%d",&n) == 1)
    {
           s = 1;
            while(n != 0)
    {
        s = s * n;
        n--;
    }
    printf("%d\n",s);
    }
    return 0;
}
