#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 short int numCasos, i = 1, j = 1;
	 unsigned long int num;
     int soma = 0;

	 scanf("%hd", &numCasos);
     
     while(i <= numCasos){
     	 scanf("%lu", &num);

         while(j <= num){
             if(num % j == 0) soma++;/*testa se num eh divisivel por j*/

             j++;
         }

         if(soma == 2) printf("%lu eh primo\n", num);
         else printf("%lu nao eh primo\n", num);
         
         soma = 0;
         j = 1;
         i++;
     }

	 return 0;
}