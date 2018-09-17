#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,m,n,x,y;
	while(cin>>t)
	{
		if(t == 0)
		break;
		cin>>m>>n;
		while(t--)
		{
			cin>>x>>y;
			if(x == m || y == n)
			cout<<"divisa"<<endl;
			else if(x > m && y > n)
			cout<<"NE"<<endl;
			else if(x < m && y > n)
			cout<<"NO"<<endl;	
			else if(x < m && y < n)
			cout<<"SO"<<endl;
			else if(x > m && y < n)
			cout<<"SE"<<endl;
		}
	}
	return 0;
}
