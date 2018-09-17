#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,A[10],B[10],i,j,small_index,temp,flag;
	cin>>t;
	cout<<"Lumberjacks:"<<endl;
	while(t--)
	{
		for(i = 0; i < 10; i++)
		cin>>B[i];
		for(i = 0; i < 10; i++)
		A[i] = B[i];
	 for(i = 0;i < 9; i++)
    {
        small_index = i;
        for(j = i+1;j < 10; j++)
        {
            if(A[j] < A[small_index])
            {
                small_index = j;
            }
        }
        temp = A[i];
        A[i] = A[small_index];
        A[small_index] = temp;
    }
		flag = 0;
		for(i = 0; i < 10; i++)
		{
			if(A[i] == B[i])
			flag = 1;
			else
			{
				flag = 0;
				break;
			}
		}
		if(flag == 0)
		{
		
				for(i = 9, j = 0; i >= 0; i--,j++)
		{
					if(A[i] == B[j])
				    flag = 1;
				else
					{
						flag = 0;
						break;
					}
		}
	}
		if(flag == 1)
		cout<<"Ordered"<<endl;
		else
		cout<<"Unordered"<<endl;
	}
	return 0;
}
