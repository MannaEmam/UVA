#include <stdio.h>
int main()
{
    int x,a,s;
    while(scanf("%d",&x)==1)
        {
             if(x==0)
            break;
    else {
       s=0;
        while(1)
        {
                a=x/3;
                s = s+a;
                x =x%3;
                x = a+x;
                if(x==2)
                    x=3;
                   else if(x==1||x==0)
                        break;
                        }
    }
     printf("%d\n",s);
    }




return 0;
}

