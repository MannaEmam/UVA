#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int i;
	string s;
	for(i = 1; i <= 2000; i++)
	{
		cin>>s;
		if("#" == s)
		break;
		else if("HELLO" == s)
		cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
		else if("HOLA" == s)
		cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
		else if("HALLO" == s)
		cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
		else if("BONJOUR" == s)
		cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
		else if("CIAO" == s)
		cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
		else if("ZDRAVSTVUJTE" == s)
		cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
		else
		cout<<"Case "<<i<<": "<<"UNKNOWN"<<endl;
	}
	return 0;
}
