#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)==1)
	{	
		if(n==0)
		break;
		printf("%d\n",1+(n-1)%9);
	}
return 0;
}
