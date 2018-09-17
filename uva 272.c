#include <stdio.h>
int main()
{
    char A[100000];
    long  i,c,len;
    c = 0;
    while(gets(A))
    {
        len = 0;
        for(i = 0; A[i] != '\0'; i++)
            len++;
        for(i = 0; i < len; i++)
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
