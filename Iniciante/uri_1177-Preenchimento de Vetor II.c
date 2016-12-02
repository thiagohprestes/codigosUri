#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
      short num, vetor[1000], i, j= 0;

      scanf("%hd", &num);
     
      for(i = 0; i < 1000; i++, j++){
          if(j == num) j = 0;
               vetor[i] = j;

               printf("N[%hd] = %hd\n", i, vetor[i]);
      }

      return 0;
}
