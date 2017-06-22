#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int n, testes = 0;
	
	while(scanf("%d", &n) * n)
		printf("Teste %d\n%d\n", ++testes, (int)(pow(2, n) - 1));
	
	return 0;
}
