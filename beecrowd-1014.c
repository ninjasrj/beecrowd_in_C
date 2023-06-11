#include <stdio.h>

int main()
{
    int x;
    float y, milage;
    scanf("%d %f", &x, &y);
    milage = x / y;
    printf("%.3lf km/l\n", milage);
    return 0;
}
