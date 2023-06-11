#include <stdio.h>

int main()
{
    int x, y, i, j;
    scanf("%d %d",&x,&y);


    for(i=1;i<y-1;i++)
    {
        for(j=i;j<i+x;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
