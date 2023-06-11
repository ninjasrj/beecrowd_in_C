#include <stdio.h>
int main()
{
    int x,y,i,j,sum;
    scanf("%d", &x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y);
        sum=0;
        for(j=1;j<y;j++)
        {
            if(y%j==0)
                sum+=j;
        }
        if(sum>1)
            printf("%d nao eh primo\n",y);
        else
            printf("%d eh primo\n",y);
    }

    return 0;
}
