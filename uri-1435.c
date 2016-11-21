#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	short tamMatriz, i, j, k, y, z, fimMatriz, fim;
	
	while(1){
		 scanf("%hd", &tamMatriz);
		
		 if(!tamMatriz) break;
		
		 short matriz[tamMatriz][tamMatriz];
		
		 fimMatriz = tamMatriz;
         
		 if(tamMatriz % 2 == 0) fim = tamMatriz-1;
		 else fim = tamMatriz;
		 y = z = 0;
		
	     for(k = 0; k < fim; k++){
			for(i = z; i < fimMatriz; i++)
				for(j = y; j < fimMatriz; j++)
					matriz[i][j] = k+1;		  
				
		     y = z = k+1;
			 fimMatriz--;		  
		 } 
				 
		 for(i = 0; i < tamMatriz; i++){
			 for(j = 0; j < tamMatriz; j++)
				 if(j == 0) printf("%3hd", matriz[i][j]);
                 else printf(" %3hd", matriz[i][j]);			 
					  
			 printf("\n");					
		 }
		 
		 printf("\n");	
    }
		
	return 0;
}