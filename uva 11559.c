#include <stdio.h>
int main()
{
	long long int n,b,h,w,i,j,min;
	while(scanf("%lld %lld %lld %lld",&n,&b,&h,&w) == 4)
	{
		long long int H,B,r;
		min = 500001;
		for(i = 0; i < h; i++)
		{
			scanf("%lld",&H);
			for(j = 0; j < w; j++)
			{
				scanf("%lld",&B);
				 r = 0;
				if(B >= n)
				{
					r = n * H;
				if(r < min)
                    min = r;
				}
			}
		}
		if(min <= b)
		printf("%lld\n",min);
		else
		printf("stay home\n");
	}
	return 0;
}
