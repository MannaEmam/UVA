#include <stdio.h>
int main()
{
    int n,k,t,r;
    while(scanf("%d %d",&n,&k) == 2)
    {
        t = 0;
        r = 0;
        for( ; ; )
        {
            t += n;
            n += r;
            if(n < k)
                break;
            r = n % k;
            n = n / k;
        }
        printf("%d\n",t);
    }
    return 0;
}
