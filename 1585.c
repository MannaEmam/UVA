#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,k,len,sum,t;
    char A[81];
    scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
            scanf("%s",&A);
            len = strlen(A);
            sum = 0;
            for(j=0,k=1;j<len;j++,k++)
            {
                if(A[j] == 'O')
                {
                    sum = sum+k;
                }
                else if(A[j]=='X')
                {
                    k=0;
                }
            }
            printf("%d\n",sum);
        }

    return 0;
}
