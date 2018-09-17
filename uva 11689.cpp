#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,t,r,s,temp;
	cin>>t;
	while(t--)
	{
			cin>>a>>b>>c;
	   temp = a + b;
	    s = 0;
	    r = 0;
     	while(temp >= c)
	{
		r = temp % c;
		s = s + (temp / c);
		temp = r + (temp / c);
	}
		cout<<s<<endl;;
	}
	return 0;
}
