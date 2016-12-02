#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     int x, total;
     
     while(scanf("%d", &x) && x != 0){
         if(x % 2 != 0) x++;/*testando se x é impar, caso sim, incrementa em 1*/
        	
         total = x * 5 + 20;/*totalizando a soma dos 5 pares consecutivos a partir de x(inclusive)*/

         printf("%d\n", total);
     }

     return 0;
}
