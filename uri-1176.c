#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     unsigned long int *f;
     int numCasos, i = 0, j = 0;
     short int fibonacci;

     scanf("%d", &numCasos);

     while(i < numCasos){
     	 scanf("%hd", &fibonacci);
           
         f = (unsigned long int *) malloc(fibonacci * (sizeof(unsigned long int)));
          
         if (f == NULL) return 1;
         
         f[0] = 0;
         f[1] = 1;
         j = 0;

         while(j < fibonacci){
             f[j+2] = f[j+1] + f[j];
             j++;

         }
         
         printf("Fib(%d) = %lu\n", j, f[i]);

     	 i++;
     	 /*free(f);*/
     }

	return 0;
}