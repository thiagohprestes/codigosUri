#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 int vetor[10], i = 0;

     while(i < 10){
         scanf("%d", &vetor[i]);

         if (vetor[i] <= 0) vetor[i] = 1;

         printf("X[%d] = %d\n", i, vetor[i]);

         i++;

	 }

	 return 0;
}