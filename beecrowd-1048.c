#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);

    if(a<=400){
        printf("Novo salario: %.2f\n", a*1.15);
        printf("Reajuste ganho: %.2f\n", a*0.15);
        printf("Em Percentual: 15 %%\n");
    }
    else if(a > 400 && a <= 800){
        printf("Novo salario: %.2f\n", a*1.12);
        printf("Reajuste ganho: %.2f\n", a*0.12);
        printf("Em Percentual: 12 %%\n");
    }
    else if(a > 800 && a <= 1200){
        printf("Novo salario: %.2f\n", a*1.1);
        printf("Reajuste ganho: %.2f\n", a*0.1);
        printf("Em Percentual: 10 %%\n");
    }
    else if(a > 1200 && a <= 2000){
        printf("Novo salario: %.2f\n", a*1.07);
        printf("Reajuste ganho: %.2f\n", a*0.07);
        printf("Em Percentual: 7 %%\n");}
    else if(a > 2000){
        printf("Novo salario: %.2f\n", a*1.04);
        printf("Reajuste ganho: %.2f\n", a*0.04);
        printf("Em Percentual: 4 %%\n");
    }
    return 0;
}
