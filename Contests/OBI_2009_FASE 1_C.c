#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	long qtdeRot;
	int tiposRot, i, j, menor, total;
	
	scanf("%ld %d", &qtdeRot, &tiposRot);
	
	int rotulos[qtdeRot];
	
	for(i = 0; i < qtdeRot; i++){
		scanf("%d", &rotulos[i]);
	}
	
	for(i = 1; i <= tiposRot; i++){
		for(j = total = 0; j < qtdeRot; j++){
			if(rotulos[j] == i) total++;
		}
		if(i == 1) menor = total;
		else if(total <= menor) menor = total;
	}
	
	printf("%d\n", menor);
	
	return 0;
}
