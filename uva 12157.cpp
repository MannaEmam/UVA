#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,d,m,j,n,i,temp;
	cin>>t;
	for(i = 1;i <= t; i++)
	{
		cin>>n;
		m = 0;
		j = 0;
		while(n--)
		{
			cin>>d;
			temp = 0;
				temp = d / 30 + 1;
				m += (temp * 10);
				temp = d / 60 + 1;
				j += (temp * 15);
		}
		if(m == j)
		cout<<"Case "<<i<<": "<<"Mile Juice "<<m<<endl;
		else if(m < j)
		cout<<"Case "<<i<<": "<<"Mile "<<m<<endl;
		else
		cout<<"Case "<<i<<": "<<"Juice "<<j<<endl;
	}
	return 0;
}
