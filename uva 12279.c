#include <stdio.h>
int main()
{
	int i,j,c = 0,n,r;
	i = 1;
		while(scanf("%d",&n) == 1)
		{
		if(n == 0)
		break;
		int A[n];
		for(j = 0; j < n; j++)
		scanf("%d",&A[j]);
		for(j = 0; j < n; j++)
		{
			if(A[j] == 0)
			c++;
		}
		r = n - c;
		r = r - c;
		printf("Case %d: %d\n",i,r);
		i++;
		c = 0;
	}
    return 0;
}
