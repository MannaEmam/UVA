#include<stdio.h>
int gcd(int a,int b)
{
    int t,gcd;
     while(b!=0)
                {
                    t=b;
                    b=a%b;
                    a=t;
                }
               gcd=a;
                return gcd;
}
int main()
{
    int g,i,j,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        g=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {

                g+=gcd(i,j);
            }
        }
        printf("%d\n",g);
    }

    return 0;
}

