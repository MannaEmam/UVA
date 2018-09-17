#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int M=0,A=0,R=0,G=0,I=0,T=0,i=0,z=0;
        char str[600];
        scanf("%s",str);
        z=strlen(str);
        for(i=0;i<z;i++){
            if(str[i]=='M')
                M++;
            else if(str[i]=='A')
                A++;
            else if(str[i]=='R')
                R++;
            else if(str[i]=='G')
                G++;
            else if(str[i]=='I')
                I++;
            else if(str[i]=='T')
                T++;
                }
 int Y[6];
    Y[0] = M;
    Y[1] = A/3;
    Y[2] = R/2;
    Y[3] = G;
    Y[4] = I;
    Y[5] = T;
    int small_index,j,temp;
    for(i = 0; i < 6; i++)
    {
        small_index = i;
        for(j = i+1;j < 6; j++)
        {
            if(Y[j] <= Y[small_index])
            {
                small_index = j;
            }
        }
        temp = Y[i];
        Y[i] = Y[small_index];
        Y[small_index] = temp;
    }
    printf("%d\n",Y[0]);
}
    return 0;
}
