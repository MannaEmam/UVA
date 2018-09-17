
#include<cstdio>
int main()
{
    char A;
    long long int i,c,len;
    while(gets(A))
    {
        c = 0;
        len = 0;
        for(i = 0; A[i] != '\0'; i++)
            len++;
        for(i = 0; i <= len; i++)
        {
            if(A[i] == '"')
            {
                c++;
                if(c % 2 == 1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",A[i]);
        }
        printf("\n");
    }
    return 0;
}

