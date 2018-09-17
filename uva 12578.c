#include <stdio.h>
#include <math.h>
int main()
{
    int t,l;
    double r,w,ar,at;
    scanf("%d",&t);
    while(t != 0)
    {
        scanf("%d",&l);
        r = (2.00 * l) / 10.00;
        w = (6.00 * l) / 10.00;
        ar = acos(-1) * pow(r,2);
        at = l * w - ar;
        printf("%.2lf %.2lf\n",ar,at);
        t--;
    }
    return 0;
}
