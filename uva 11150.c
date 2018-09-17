#include <stdio.h>
int main()
{
    int n,a,s;
    while(scanf("%d",&n) == 1)
    {
        s = n;
        while(1)
        {
            if(n == 0 || n == 1)
                break;
            a = n / 3;
            s += a;
            n = (n % 3) + a;
            if(n == 2)
                n = 3;
        }
        printf("%d\n",s);
    }
    return 0;
}
