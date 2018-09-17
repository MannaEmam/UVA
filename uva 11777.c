#include <stdio.h>
int main()
{
    int t1,t2,f,at,ct1,ct2,ct3,i,j,n,t,k;
    double avg_ct;
    scanf("%d",&n);
    for(k = 1; k <= n; k++)
    {
       scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&at,&ct1,&ct2,&ct3);
       if(ct1 >= ct3 && ct2 >= ct3)
        avg_ct = (ct1 + ct2) / 2.0;
       else if(ct1 >= ct2 && ct3 >= ct2)
        avg_ct = (ct1 + ct3) / 2.0;
       else if(ct2 >= ct1 && ct3 >= ct1)
        avg_ct = (ct2 + ct3) / 2.0;
        t = t1 + t2 + f + at + avg_ct;
         if(t >= 90)
            printf("Case %d: A\n",k);
         else if(t >= 80 && t < 90)
            printf("Case %d: B\n",k);
         else if(t >= 70 && t < 80)
            printf("Case %d: C\n",k);
         else if(t >= 60 && t < 70)
            printf("Case %d: D\n",k);
         else if(t < 60)
            printf("Case %d: F\n",k);
    }
    return 0;
}
