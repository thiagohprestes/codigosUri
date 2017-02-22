#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int compara(const void *, const void *);

int main(){
    int bilhetes, totPessoas, *codBilhete, i, j, bilhetesFalse;
    
    while(scanf("%d %d", &bilhetes, &totPessoas) && bilhetes+totPessoas){
 		codBilhete = (int *) malloc(sizeof(int) * totPessoas);

    	for(i = 0; i < totPessoas; i++){
    		scanf("%d", &codBilhete[i]);
    	}

    	qsort(codBilhete, totPessoas, sizeof(int), compara);

    	for(i = bilhetesFalse = 0, j = 1; i < totPessoas; i = j, j = i+1){
        	if(codBilhete[j] == codBilhete[i]){
        		bilhetesFalse++;
                j++;
        		while(codBilhete[j] == codBilhete[i]) j++;
        	}
        }

    	printf("%d\n", bilhetesFalse);
    }

    return 0;
}

int compara(const void *p1, const void *p2){
	int *i = (int *) p1, *j = (int *) p2;

	if(*i > *j)
		return 1;
	else if(*i < *j)
		return -1;
	else
		return 0;
}
