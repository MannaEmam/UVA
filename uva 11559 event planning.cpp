#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,b,h,w,i,j,min;
	while(cin>>n>>b>>h>>w)
	{
		long long int H,B,r;
		min = 500001;
		for(i = 0; i < h; i++)
		{
			cin>>H;
			for(j = 0; j < w; j++)
			{
				cin>>B;
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
		cout<<min<<endl;
		else
		cout<<"stay"<<endl;
	}
	return 0;
}

