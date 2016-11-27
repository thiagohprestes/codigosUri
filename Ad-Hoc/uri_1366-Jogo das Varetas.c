#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Varetas{
  int comprimento, numVaretas;
};

int retangulos(struct Varetas *, int);

int main(){
     int n, i;
     
     struct Varetas *pVaretas; 

     while(scanf("%d" , &n) && n){
	     //struct Varetas pVaretas[n];
	     pVaretas = (struct Varetas *) malloc(n * sizeof(struct Varetas));

	     for(i = 0; i < n; i++)
             scanf("%d %d", &pVaretas[i].comprimento, &pVaretas[i].numVaretas);
	    
         printf("%d\n", retangulos(pVaretas, n));
     }

     free(pVaretas);

	 return 0;
}

int retangulos(struct Varetas *varetas, int n){
     int i;
     long total = 0;

     for(i = 0; i < n; i++){
      	 if(varetas[i].numVaretas % 2 != 0)
      		varetas[i].numVaretas--;

      	 total += varetas[i].numVaretas;
     }

      return total / 4;
}