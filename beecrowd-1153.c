#include <stdio.h>
int main()
{
    int x, i, fac=1;

        scanf("%d", &x);
        for(i=x;i>=1; i--)
        {
            fac=fac*i;
        }
        printf("%d\n",fac);
    return 0;
}
