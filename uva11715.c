#include<stdio.h>
#include<math.h>
int main()
{
    int n,p;
    double x,y,z,u,v,s,t,a;
    p =1;
    while(scanf("%d",&n)==1 && n!=0)
       {
            scanf("%lf %lf %lf",&x,&y,&z);
            if(n == 1)
            {
                u = x;
                v = y;
                t = z;
                a = ((v-u)/t);
                s = (((v*v)-(u*u))/(2*a));
                printf("Case %d: %.3lf %.3lf\n",p,s,a);
            }
            else if(n == 2)
            {
                u = x;
                v = y;
                a = z;
                s = (((v*v)-(u*u))/(2*a));
                t = ((v-u)/a);
                printf("Case %d: %.3lf %.3lf\n",p,s,t);
            }
            else if(n == 3)
            {
                u = x;
                a = y;
                s = z;
                v = sqrt((u*u)+(2*a*s));
                t = ((v-u)/a);
                printf("Case %d: %.3lf %.3lf\n",p,v,t);
            }
            else if(n == 4)
            {
                v = x;
                a = y;
                s = z;
                u = sqrt((v*v)-(2*a*s));
                t = ((v-u)/a);
                printf("Case %d: %.3lf %.3lf\n",p,u,t);
            }
            p++;
        }

    return 0;
}
