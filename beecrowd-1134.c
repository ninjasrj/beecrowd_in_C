#include <stdio.h>

int main()
{
    int x, aL=0, gA=0, dI=0;
    while(1)
    {
        scanf("%d",&x);
        if(x==1)
            aL++;
        if(x==2)
            gA++;
        if(x==3)
            dI++;
        if(x==4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",aL);
    printf("Gasolina: %d\n",gA);
    printf("Diesel: %d\n",dI);
        return 0;
}
