#include <stdio.h>

int main()
{
    int a,x,y,min,max,sum=0, count=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d %d", &x, &y);
        if(x<y){
            min=x;
            max=y;
        }else{
        max=x;
        min=y;
        }
        for(int j=min+1;i<max;i++){
            if(i%2!=0){
               sum+=i;
               count++;
               int avg = sum/count;
            printf("%d",avg);
            }

        }
    }
    return 0;
}
