#include <stdio.h>

int main()
{
    float a, b, c, peri, area;
    scanf("%f %f %f", &a, &b, &c);

    if((a+b > c) && (b+c > a) && (a+c > b))
    {
        peri = a + b + c;
        printf("%.1f\n", peri);
    } else {
        area = .5 * (a+b) * c;
        printf("%.1f\n", area);
    }
        return 0;
}
