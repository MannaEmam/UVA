#include <stdio.h>
int main()
{
    long long int m,f,total,n,i,temp;
    while(scanf("%lld",&n) == 1)
    {
        if(n == -1)
            break;
        temp = 0;
        m = 0;
        total = 1;
        for( i = 0; i < n; i++)
        {
            m = total;
            f = temp + 1;
            total = m + f;
            temp = m;
        }
        printf("%lld %lld\n",m,total);
    }
    return 0;
}
