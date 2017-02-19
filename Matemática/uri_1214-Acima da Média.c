#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int numCasos, numPessoas, medTot, acimaMedia, i;
    int *mediaIndiv;

    scanf("%d" , &numCasos);

    while(numCasos--){
    	scanf("%d" , &numPessoas);
    	mediaIndiv = (int *) malloc(sizeof(int) * numPessoas);

    	for(i = medTot = 0; i < numPessoas; i++){
    		scanf("%d", &mediaIndiv[i]);
    		medTot += mediaIndiv[i];
    	}

    	medTot/= numPessoas;
    	
    	for(i = acimaMedia = 0; i < numPessoas; i++){
    		if(mediaIndiv[i] > medTot)
    			acimaMedia++;
    	}

    	printf("%.3f%%\n", ((float)acimaMedia/numPessoas) * 100);
    	free(mediaIndiv);
    }

	return 0;
}
