#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	short tamMatriz, i, j, vaiUm, fimUm;
	
	while(scanf("%hd", &tamMatriz) != EOF){
		
		short matriz[tamMatriz][tamMatriz];
		
		for(i = 0; i < tamMatriz; i++)
			for(j = 0; j < tamMatriz; j++){
				if(i == j) matriz[i][j] = 2;
				else if(i + j == tamMatriz-1) matriz[i][j] = 3;
				else matriz[i][j] = 0;
			}
		
		vaiUm = tamMatriz/3;
		fimUm = tamMatriz-vaiUm;
		
		for(i = vaiUm; i < fimUm; i++)
			for(j = vaiUm; j < fimUm; j++){
				 matriz[i][j] = 1;
				
			}
		
		matriz[tamMatriz/2][tamMatriz/2] = 4;
		
		for(i = 0; i < tamMatriz; i++){
			 for(j = 0; j < tamMatriz; j++)
				 printf("%hd", matriz[i][j]);			 
			 
			 printf("\n");					
		 }
		 printf("\n");
				
	}
	return 0;
}
