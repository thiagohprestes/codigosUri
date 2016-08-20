#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	short int num, i = 1;
    int vetor[10];

    scanf("%hd", &num);

    vetor[0] = num; 

    printf("N[0] = %hd\n", num);

    while(i < 10){
         vetor[i] = vetor[i - 1] * 2; 

         printf("N[%hd] = %d\n", i, vetor[i]);
        
         i++;
    }

	return 0;
}