#include <stdio.h>
{
    int t;
    int a[10000]; //array will have the capacity to store 10000 digits.
    int n,i,j,temp,m,x;
       temp = 0; //Initializes carry variable to 0.
       for(i=1;i<=n;i++)
       {
            for(j=0;j<m;j++)
            {
               x = a[j]*i+temp; //x contains the digit by digit product
               a[j]=x%10; //Contains the digit to store in position j
               temp = x/10; //Contains the carry value that will be stored on later indexes
            }
             while(temp>0) //while loop that will store the carry value on array.
             {
               a[m]=temp%10;
               temp = temp/10;
               m++; // increments digit counter
             }

    }
    return 0;
}

double factorial(double x)
{
    double s = 1;
    while(x != 1)
    {
        s *= x;
        x--;
    }
    return s;
}
int main()
{
    double n,i,j,t1,t2,temp,z;
for(i = 1; i < 1001; i++)
{

        scanf("%lf",&n);
        if(n == 0)
            break;
        j = 4;
        while(1)
        {
            temp = j - 2;
            t1 = factorial(j);
            t2 = factorial(temp);
            z = (t1 / (t2 * 2)) - j;
            if(z >= n)
                break;
                j++;
        }
    }
    return 0;
}
