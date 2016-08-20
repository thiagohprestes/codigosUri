#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 short int numCasos, n, i =0;

	 scanf("%hd", &numCasos);

	 while(i < numCasos){
	 	 scanf("%hd", &n);

         if (n % 2 == 0) printf("0\n");
         else printf("1\n");
        
        i++;
     }

	 return 0;
}