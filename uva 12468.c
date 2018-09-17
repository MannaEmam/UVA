#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,x;
    while(scanf("%d %d",&a,&b)==2)
    {
            if(a==-1 && b ==-1)
        break;

            x= abs (a-b);
            if(x>=50)
                x = 100 -x;
        printf("%d\n",x);

    }
    return 0;
}
