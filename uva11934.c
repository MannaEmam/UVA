#include<stdio.h>
int main()
{
    int i,a,b,c,n,l,f,count;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&n,&l)==5)
    {
        count = 0;
        if(a==0 && b==0 && c==0 && n==0 && l==0)
            break;
        else
        {
            for(i=0; i<=l; i++)
            {
                f = ( (a*i*i) + (b*i) + c);
                if(f%n==0)
                    count++;
            }

        }
        printf("%d\n",count);
    }
    return 0;
}
