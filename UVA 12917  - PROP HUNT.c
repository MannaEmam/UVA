#include<stdio.h>
int main()
{
	int p,h,d;
	while(scanf("%d %d %d",&p,&h,&d) == 3)
	{
		if(p <= (d - h))
		printf("Props win!\n");
		else
		printf("Hunters win!\n");
	}
	return 0;
}
