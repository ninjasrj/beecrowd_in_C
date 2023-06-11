#include <stdio.h>

 int main()
 {
     int i, j, Num;
     int ar[7] = {100,50,20,10,5,2,1};
     int br[7];
     scanf("%d", &Num);
     printf("%d\n",Num);

     for(i = 0; i < 7; i++){
        br[i] = Num / ar[i];
        Num = Num % ar[i];
     }

     for(j = 0; j < 7; j++){
        printf("%d nota(s) de R$ %d,00\n", br[j], ar[j]);
     }
     return 0;
 }
