#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int nota;
	
	scanf("%d", &nota);
	
	if(nota == 0) printf("E\n");
	else if(nota <= 35) printf("D\n");
	else if(nota <= 60) printf("C\n");
	else if(nota <= 85) printf("B\n");
	else printf("A\n");
	
	
	return 0;
}
