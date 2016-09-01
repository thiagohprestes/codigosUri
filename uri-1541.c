#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short ladoA, ladoB, porc;

     while(1){
     	 scanf("%hd" , &ladoA);
     	 if(ladoA == 0) break;
     	 
     	 scanf("%hd %hd" , &ladoB, &porc);
        
         printf("%d\n", (int)sqrt((ladoA*ladoB*100)/porc));
     }

	 return 0;
}