#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,c,i,j,n,key_value;
	cin>>t;
	while(t--)
	{
		cin>>n;
		c = 0;
		int A[n];
		for(i = 1; i <= n; i++)
		cin>>A[i];
		for(j = 2;j <= n; j++)
		{
		   key_value = A[j];
		   i = (j-1);
		   while(i > 0 && A[i] > key_value)
		   {
		   	A[i + 1] = A[i];
		   	i--;
		   	c++;
		   }
		   A[i + 1] = key_value;
		}
		cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
	}
	return 0;
} 
