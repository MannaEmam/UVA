#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n = n * 567;
		n = n / 9;
		n = n + 7492;
		n = n * 235;
		n = n / 47;
		n = n - 498;
		n = n % 100;
		n = abs (n / 10);
		cout<<n<<endl;
	}
	return 0;
}
