#include <stdio.h>

int main()
{
    float a, b, c, d, e;
    float avg1, avg2;
    scanf("%f %f %f %f", &a,&b, &c, &d);
    avg1 = ((a*2) + (b*3) + (c*4) + (d*1)) / (2+3+4+1);
    printf("Media: %.2f\n", avg1);
    if(7.0<=e){
        printf("Aluno aprovado.\n");
    }
    else if(avg1<5.0){
        printf("Aluno reprovado.\n");
    } else {
        printf("Nota do exame: \n");
        scanf("f", &e);
        avg2 = (avg1 + e) / 2;
        if(avg2>=5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
            printf("Media final: %.2f", avg2);
        }

    return 0;
}
