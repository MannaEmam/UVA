#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	char A[6];
	cin>>t;
	while(t--)
	{
		cin>>A;
		if(A[0] == 'o' || A[1] == 'n')
		cout<<"1"<<endl;
		else if(A[2] == 'o' || A[1] == 'w')
		cout<<"2"<<endl;
		else if(A[0] == 't' || A[5] == 'e')
		cout<<"3"<<endl;
	}
	return 0;
}
