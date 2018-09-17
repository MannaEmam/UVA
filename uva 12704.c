#include <stdio.h>
#include <math.h>
int main()
{
    int n,x,y,r;
    float s,l;
    scanf("%d",&n);
    while(n != 0)
    {
        scanf("%d %d %d",&x,&y,&r);
        s = r - sqrt(pow(x,2) + pow(y,2));
        l = r + sqrt(pow(x,2) + pow(y,2));
        printf("%.2f %.2f\n",s,l);
        n--;
    }
    return 0;
}
