#include <stdio.h>

int main()
{
    int x,y,rabbit=0, rat=0,frog=0,count=0;
    char a,b;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d %c",&y,&a);
        count+=y;
        if(a=='C'){
            rabbit+=y;
        }
        if(a=='R'){
            rat+=y;
        }
        if(a=='S'){
            frog+=y;
        }
    }
    count = rabbit+rat+frog;
    printf("Total: %d cobaias\n",count);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %.2f %%\n",(rabbit*100.00)/count);
    printf("Percentual de ratos: %.2f %%\n",(rat*100.00)/count);
    printf("Percentual de sapos: %.2f %%\n",(frog*100.00)/count);
    return 0;
}
