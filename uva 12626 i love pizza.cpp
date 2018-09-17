#include<bits/stdc++.h>
using namespace std;
int sorting_function(int A[6])
{
    int i,small_index,n,j,temp;
    for(i = 0;i <n-1; i++)
    {
        small_index = i;
        for(j = i+1;j <n; j++)
        {
            if(A[j]<A[small_index])
            {
                small_index = j;
            }
        }
        temp = A[i];
        A[i] = A[small_index];
        A[small_index] = temp;
    }
    return A[0];
}
int main()
{
    char T[600];
    int Y[5],x,m,k,c1,c2,c3,c4,c5,c6,i,n;
    cin>>x;
    while(x != 0)
    {
    c1 = 0;
    c2 = 0;
    c3 = 0;
    c4 = 0;
    c5 = 0;
    c6 = 0;
    m = 0;
    k = 0;
    cin>>T;
    for(i = 0; T != '\0';i++)
    {
        if(T[i] == 'A')
        {
            k++;
            if(k % 3 == 0)
            {
                k == 0;
                c1++;
            }
        }
       else if(T[i] == 'R')
        {
            m++;
            if(m % 2 == 0)
            {
                m == 0;
                c2++;
            }
        }
        else if(T[i] == 'T')
            c3++;
        else if(T[i] == 'M')
            c4++;
        else if(T[i] == 'I')
            c5++;
        else if(T[i] == 'G')
            c6++;
    }
    Y[0] = c1;
    Y[1] = c2;
    Y[2] = c3;
    Y[3] = c4;
    Y[4] = c5;
    Y[5] = c6;
    n = sorting_function(Y);
    cout<<n<<endl;
    x--;
}
    return 0;
}

