#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int compet, qtdeFolhas, qtdeInd;
	
	scanf("%d %d %d", &compet, &qtdeFolhas, &qtdeInd);
	
	if((qtdeFolhas/(float)qtdeInd) >= compet) printf("S\n");
	else printf("N\n");
	
	return 0;
}
