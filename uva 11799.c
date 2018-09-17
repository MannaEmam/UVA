#include <stdio.h>
int main()
{
    int i,j,n,k,m,t;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&t);
        int A[t];
        for(j = 0; j < t; j++)
            scanf("%d",&A[j]);
        m = A[0];
        for(j = 1; j < t; j++)
        {
            if(A[j] > m)
                m = A[j];
        }
        printf("Case %d: %d\n",i,m);
    }
    return 0;
}
