#include <stdio.h>

int main()
{
    int i, a, x, m=0;
    scanf("%d",&x);
    for(a=0; a<x; a++){
        for(i=m+1; i<=m+3; i++)
        {
            printf("%d ",i);
        }

        printf("PUM\n");
        m=0;
        m+=i;

    }
    return 0;
}
