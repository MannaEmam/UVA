#include <stdio.h>
int main()
{
    long long int t,a,b,c,i;
    scanf("%lld",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("Case %lld: ",i);
        if(a+b <= c || a+c <= b || b+c <= a)
        {
            printf("Invalid\n");
        }
        else if(a == b && b == c )
        {
            printf("Equilateral\n");
        }
        else if((a == b && b != c) || ( b==c && b != a) || (a==c && a!=b))
        {
            printf("Isosceles\n");
        }
        else
            printf("Scalene\n");
    }
    return 0;
}
