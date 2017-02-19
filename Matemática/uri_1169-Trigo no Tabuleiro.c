#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

unsigned long long totGraos(short);

int main(){
    int numCasos;
    short casas;

    scanf("%d" , &numCasos);

    while(numCasos--){
    	scanf("%hd", &casas);

    	printf("%llu kg\n", totGraos(casas-1)/12000);
    }

	return 0;
}

unsigned long long totGraos(short casas){
	if(casas == 0)
		return 1;
    else
		return (unsigned long long) pow(2, casas) + totGraos(--casas);
}
