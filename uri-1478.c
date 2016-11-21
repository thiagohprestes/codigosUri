#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	short tamMatriz, i, j, k , l;
	
	
	 while(1){
		 scanf("%hd", &tamMatriz);
		
		 if(!tamMatriz) break;
		 
		 for(i = 1; i <= tamMatriz; i++){
			 k = i;
			 for(j = l = 1; j <= tamMatriz; j++){
				 if(j != 1) printf(" ");
				 if(j >= i){printf("%3hd", l); l++;}
				 else{ printf("%3hd", k); k--;}
		     }
			 printf("\n");
		 }
		 printf("\n");
	 } 
	 return 0;
}
