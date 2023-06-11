#include <stdio.h>

int main()
{
    int x, a;
    scanf("%d",&x);
    for(a=1; a<=x; a++){
        printf("%d %d %d\n",a, a*a, a*a*a);
    }
    return 0;
}
