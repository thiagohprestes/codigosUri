#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 short int numCasos;
	 int i = 1, j = 1, soma = 0;
	 long int num;

	 scanf("%hd", &numCasos);
     
     while(j <= numCasos){
     	 scanf("%ld", &num);

         while(i < num){
             if(num % i == 0) soma += i;

             i++;
         }

         if(soma == num) printf("%ld eh perfeito\n", num);
         else printf("%ld nao eh perfeito\n", num);
         
         j++;
         i = 1;
         soma = 0;
     }

	return 0;
}