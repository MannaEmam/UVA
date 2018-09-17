#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,j,i;
	cin>>t;
for(j = 1;j <= t; j++)
	{
		cin>>n;
		int A[n];
		for(i = 1; i <= n; i++)
		cin>>A[i];
		n = n / 2 + 1;
		cout<<"Case "<<j<<": "<<A[n]<<endl;
	}
	return 0;
}
