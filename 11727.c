#include <stdio.h>
int main()
{
    int T,a,b,c,res,i;
    scanf("%d",&T);
    i =1;

        while (i<=T)
        {
            scanf("%d %d %d",&a,&b,&c);
            if(b>a&&c>b||b>c&&a>b)
                res = b;
            else if(c>a&&b>c||c>b&&a>c)
                res = c;
            else if(a>b&&c>a||a>c&&b>a)
                res = a;
            printf("Case %d: %d\n",i,res);
            i++;
        }
   return 0;
}
