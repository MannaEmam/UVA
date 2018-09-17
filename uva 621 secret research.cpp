#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	int t,len;
	string n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		len = n.size();
		if(n == "1" || n == "4" || n == "78")
		cout<<"+"<<endl;
		else if(n[len-1] == '5' && n[len-2] == '3')
		cout<<"-"<<endl;
		else if(n[0] == '9' && n[len-1 == '4'])
		cout<<"*"<<endl;
		else if(n[0] == '1' && n[1] == '9' && n [2] == '0')
		cout<<"?"<<endl;
	}
	return 0;
}
