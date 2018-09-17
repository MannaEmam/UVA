#include <stdio.h>
#include <math.h>
int main()
{
    long long int i,a,n,s;
    while(scanf("%lld %lld",&n,&a) == 2)
    {
        s = 0;
        for(i = 1; i <= n; i++)
        {
            s += (i * pow(a,i));
        }
        printf("%lld\n",s);
    }
    return 0;
}
\\Should be done throuh JAVA or CPP
