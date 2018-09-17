#include <stdio.h>
int main()
{
    int h,l,t,n,i,j,temp;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%d",&n);
        int A[n];
        for(j = 0; j < n; j++)
           scanf("%d",&A[j]);
        temp = A[0];
        h = 0;
        l = 0;
        for(j = 1; j < n; j++)
        {
            if(A[j] == temp)
                continue;
            else if(A[j] > temp)
                {
                    h++;
                    temp = A[j];
                }
            else if(A[j] < temp)
                {
                    l++;
                    temp = A[j];
                }
        }
        printf("Case %d: %d %d\n",i,h,l);
    }
    return 0;
}
