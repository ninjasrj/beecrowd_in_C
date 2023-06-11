#include <stdio.h>

int main()
{
    double A, B, C, tri, cir, trap, sqr, rect;
    scanf("%lf %lf %lf", &A, &B, &C);
    tri = 0.5*A*C;
    cir = 3.14159*C*C;
    trap = ((A + B)/2)*C;
    sqr = B*B;
    rect = A * B;
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", sqr);
    printf("RETANGULO: %.3lf\n", rect);
    return 0;
}
