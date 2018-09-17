#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int Ins[100];
	int i,sum,t,n,x,y;
	cin>>t;
	while(t--)
	{
		sum = 0;
		cin>>n;
		for(i = 1; i <= n; i++)
		{
			cin>>s;
			if(s == "LEFT")
			{
				sum -= 1;
				Ins[i] = 1;
			}
			else if(s == "RIGHT")
			{
				 sum += 1;
				 Ins[i] = 2;
			}
			else
			{
				cin>>s;
				cin>>x;
				y = Ins[x];
				if(y == 1)
			{
				sum -= 1;
				Ins[i] = 1;
			}
			else if(y == 2)
			{
				 sum += 1;
				 Ins[i] = 2;
			}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
