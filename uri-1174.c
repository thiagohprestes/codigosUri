#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short int i = 0;
     double vetor[100];
     
     while(i < 100){
         scanf("%lf", &vetor[i]);

         if(vetor[i] <= 10) printf("A[%hd] = %.1lf\n", i, vetor[i]);

         i++;
     }	

 	 return 0;
}