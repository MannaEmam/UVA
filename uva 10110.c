#include <stdio.h>
#include <math.h>
int main()
{
    double n,s;
    long long int a;
    while(scanf("%lf",&n) == 1)
    {
        if(n == 0)
            break;
          a = sqrt(n);
          s = pow(a,2);
        if(s == n)
            printf("yes\n");
       else
            printf("no\n");
    }
    return 0;
}
