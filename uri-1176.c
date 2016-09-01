#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     unsigned long long f[60];
     short numCasos, i = 0, fibonacci;

     scanf("%hd", &numCasos);

     f[0] = 0;
     f[1] = 1;

     while(numCasos--){
     	 scanf("%hd", &fibonacci);

         while(i < fibonacci - 1){
             f[i+2] = f[i+1] + f[i];
             i++;
         }
         
         printf("Fib(%hd) = %llu\n", fibonacci, f[fibonacci]);
     }

	return 0;
}