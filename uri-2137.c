#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void selectionSort(int *, int);

int main(){
	int n, i;
	
	while(scanf("%d", &n) != EOF){		
		int vetor[n];
        for(i = 0; i < n; i++)
            scanf("%d", &vetor[i]);			
	    
        selectionSort(vetor, n);

        for(i = 0; i < n; i++)
            printf("%04d\n", vetor[i]);	
	}
	
	return 0;
}

void selectionSort(int *vetor, int n){
	int i, j, aux, menor;
	
	for(i = 0; i < n; i++){
		menor = i;
		for(j = i+1; j < n; j++)
			if(vetor[j] < vetor[menor]) menor = j;
		
		aux = vetor[i];
		vetor[i] = vetor[menor];
		vetor[menor] = aux;
	}
}

