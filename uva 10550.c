#include <stdio.h>
int main()
{
    int a,b,c,d,r,x,y,z;
    while(scanf("%d %d %d %d",&a,&b,&c,&d) == 4)
    {
        if(a== 0 && b== 0 && c == 0 && d == 0)
            break;
        x = (((40 - b) + a) % 40) * 9;
        y = (((40 - b) + c) % 40) * 9;
        z = (((40 - d) + c) % 40) * 9;
        r = 1080 + x + y + z;
        printf("%d\n",r);
    }
    return 0;
}
