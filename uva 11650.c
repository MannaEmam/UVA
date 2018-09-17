#include<stdio.h>
#include<math.h>
int main()
{
    int h,m,n;
    scanf("%d",&n);
    while(n--)
        {
             scanf("%d:%d",&h,&m);
            if(m==0)
            {
                h = abs(12-h);
                if(h==0)
                    h = 12;
                    m=m;
            }
            else if(h==12 && m>0)
            {
                h = 11;
                m = (60-m);
            }
            else
            {
                h=abs(12-h-1);
                if(h==0)
                    h = 12;
                    m = 60-m;
            }
            printf("%02d:%02d\n",h,m);
    }
return 0;
}
