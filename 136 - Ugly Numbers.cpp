#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,cnt,j,flag;
    i = 2;
    cnt = 1;
    while(cnt != 1500)
    {
        j = i / 2;
        flag = 1;
        while(j > 5)
        {
            if(i % j == 0)
                {
                    flag = 0;
                    break;
                }
            j--;
        }
        if(flag)
        {
            if( (i%2 == 0 || i % 3== 0 || i % 5 == 0) && (i%4 != 0) )
            cnt++;
        }
        i++;
    }
    cout << "The 1500'th ugly number is <" << i-- << ">." << endl;
    return 0;
}
