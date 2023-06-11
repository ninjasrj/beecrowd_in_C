#include <stdio.h>
int main()
{
    int i, x, y[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&x);
        if(x>0)
            y[i]=x;
        else
            y[i]=1;
        printf("X[%d] = %d\n",i, y[i]);
    }
    return 0;
}
