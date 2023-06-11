#include <stdio.h>

int main()
{
    double a,s=0,avg,x=0;
    while(1)
    {
        scanf("%lf",&a);
        if(a>0)
        {
            s++;
            x+=a;
            avg=x/s;
        }
        else
            break;
    }
    printf("%.2f\n",avg);
    return 0;
}
