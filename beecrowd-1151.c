#include <stdio.h>

int main()
{
    int a, b, c, i, x;
    a=0, b=1, c=0;
    scanf("%d",&x);

    if(x==0 || x==1){
        printf("%d", a);
        return 0;
    }

    printf("%d ",a);
    for(i=2;i<x;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d ",c);
    }
    printf("%d\n",c+b);
    return 0;
}
