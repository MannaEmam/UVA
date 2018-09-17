#include <stdio.h>
#include <math.h>
int main()
{
    double n,p,k,x;
    while(scanf("%lf %lf",&n,&p) == 2)
    {
        x = log(p) / n;
        k = exp(x);
        printf("%.0lf\n",k);
    }
    return 0;
}
