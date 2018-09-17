#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,n,s;
	while(cin>>n)
	{
		if(n < 0)
		break;
		s = 1;
		for(i = 1; i <= n; i++)
		s += i;
		cout<<s<<endl;	
	}
	return 0;
}
