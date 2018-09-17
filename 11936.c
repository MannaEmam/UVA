#include <stdio.h>
int main()
{
    int a,b,c,n,flag;
    scanf("%d",&n);
    while(n != 0)
    {
        flag = 0;
        scanf("%d %d %d",&a,&b,&c);
        if(a + b <= c)
            flag++;
        else if(a + c <= b)
            flag++;
        else if(b + c <= a)
            flag++;
        if(flag == 0)
            printf("OK\n");
        else
            printf("Wrong!!\n");
        n--;
    }
    return 0;
}
