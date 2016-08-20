#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 short int i = 0, j = 19;
     int vetor[20], aux;
    

     while(i < 20){
         scanf("%d", &vetor[i]);
         
         i++;

     }

     i = 0;

     while(i < 10){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         
         i++;
         j--;
     
     }
     
     i = 0;

     while(i < 20){
         printf("N[%hd] = %d\n", i, vetor[i]);

         i++;
     
     }




	 return 0;
}