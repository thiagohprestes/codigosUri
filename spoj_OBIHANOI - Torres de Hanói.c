#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int n, testes = 0;
	
	while(scanf("%d", &n) && n != 0){
		testes++;
		printf("Teste %d\n", testes);
		printf("%d\n", (int)(pow(2, n) - 1));
	}
	
	return 0;
}
