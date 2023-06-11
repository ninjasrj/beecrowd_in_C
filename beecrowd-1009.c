#include <stdio.h>
 int main() {

    char name[30];
    float salary;
    double sales, total;

    gets(name);
    scanf("%f %lf", &salary, &sales);
    total = salary + (sales*15)/100;
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
 }
