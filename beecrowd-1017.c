#include <stdio.h>

int main()
{
    int a, b;
    double fs;
    scanf("%d %d", &a, &b);
    fs = a * b;
    printf("%.3lf\n", fs/12);
    return 0;
}
