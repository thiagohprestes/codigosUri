#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	short n, numVagoes, vagoes, i, aux, troca;
	int totalTrocas;
	
	scanf("%hd", &n);
	
	while(n--){
		scanf("%hd", &numVagoes);
		
		short vagoes[numVagoes];
		
		for(i = 0; i < numVagoes; i++){
			scanf("%hd", &vagoes[i]);
		}
		
		totalTrocas = 0;
		troca = 1;
		
		while(troca){
			troca = 0;
			for(i = 0; i < numVagoes-1; i++){
				if(vagoes[i] > vagoes[i+1]){
					aux = vagoes[i];
					vagoes[i] = vagoes[i+1];
					vagoes[i+1] = aux;
					troca = 1;
					totalTrocas++;
				}
			}
	    }
		
		printf("Optimal train swapping takes %d swaps.\n", totalTrocas);
		
	}
	
	return 0;
}