#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,sum;
	string s;
	sum = 0;
	cin>>t;
	while(t--)
	{
		cin>>s;
		if("donate" == s)
		{
			cin>>a;
			sum += a;
		}
		else if("report" == s)
		cout<<sum<<endl;
	}
	return 0;
}
