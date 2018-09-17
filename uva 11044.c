#include <stdio.h>
int main()
{
    int i,j,m,n,t,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        i = n / 3;
        j = m / 3;
        c = i * j;
        printf("%d\n",c);
    }
   return 0;
}
