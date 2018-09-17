#include <stdio.h>
int main()
{
    int x,y,z,n,t;
    scanf("%d",&n);
    while(n != 0)
    {
        scanf("%d %d %d",&x,&y,&z);
       t = z * (x + (x - y)) / (x + y);
       if(t <= 0)
        printf("0\n");
       else
        printf("%d\n",t);
        n--;
    }
    return 0;
}
