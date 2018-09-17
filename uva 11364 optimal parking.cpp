#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,small_index,temp,result,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int A[n];
		for(i = 0; i < n; i++)
		cin>>A[i];
		for(i = 0; i < n-1; i++)
		{
			small_index = i;
			for(j = i + 1; j < n; j++)
			{
				if(A[j] < A[small_index])
				small_index = j;
			}
			temp = A[i];
			A[i] = A[small_index];
			A[small_index] = temp;
		}
		result = (A[n-1] - A[0]) * 2;
		cout<<result<<endl;
	}
	return 0;
}
