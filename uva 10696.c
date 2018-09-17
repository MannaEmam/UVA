#include<stdio.h>
int main()
{
    int n,f;
    while(scanf("%df",&n)==1 && n!=0)
    {
        if(n <= 100)
            f = 91;
        else if(n >= 101)
            f =n -10;
        printf("f91(%d) = %d\n",n,f);
    }
    return 0;
}
