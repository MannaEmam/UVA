#include <stdio.h>
int main()
{
    int n,i,f,area,animal,e;
    double avg,s,t;
    scanf("%d",&n);
    while(n != 0)
    {
        scanf("%d",&f);
        s = 0;
        for(i = 0; i < f; i++)
        {
            scanf("%d %d %d",&area,&animal,&e);
            t = animal;
            avg = (area / t);
            avg = avg * e;
            avg = avg * animal;
            s += avg;
        }
        printf("%.0lf\n",s);
        n--;
    }
    return 0;
}
