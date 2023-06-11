#include <stdio.h>
int main()
{
    int a, x, y, z, i, j, sum=0;
    scanf("%d", &a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d", &x,&y);
        z=(x+2*(y-1))+1;
        for(j=x; j<=z;j++)
        {
            if(j%2!=0)
                sum+=j;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
