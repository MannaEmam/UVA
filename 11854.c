#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x,y,z;
    while(scanf("%d %d %d",&x,&y,&z)==3)
    {
        if(x==0&&y==0&&z==0)
            break;
        else
            {
                if(sqrt(pow(x,2)+pow(y,2))==z)
                    printf("right\n");
                    else if(sqrt(pow(z,2)+pow(y,2))==x)
                    printf("right\n");
                 else if(sqrt(pow(z,2)+pow(x,2))==y)
                    printf("right\n");
                else
                    printf("wrong\n");
            }
    }
    return 0;
}
