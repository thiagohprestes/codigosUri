#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	short numCasos, somaTriPasc, i;
	long total;
	
	scanf("%hd", &numCasos);
	
	while(numCasos--){
		scanf("%hd", &somaTriPasc);
		
		for(i = total = 0; i < somaTriPasc; i++){
			total += (int)pow(2, i);
		}
		printf("%ld\n", total);
	}
	
	return 0;
}
