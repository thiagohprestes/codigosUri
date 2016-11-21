#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float media(double, short);
float variancia(float *, float, short);

int main(){
	short numValores, i;
	double total = 0.;
	
	scanf("%hd", &numValores);
	
	float valor[numValores];
	
	for(i = 0; i < numValores; i++){
		scanf("%f", &valor[i]);
		total += valor[i];
	}
	
	printf("media: %.4f ", media(total, numValores));
	printf("variancia: %.4lf\n", variancia(valor, media(total, numValores),  numValores));
	
	return 0;
}

float media(double total, short numValores){
	return total/numValores;
}

float variancia(float *valor, float media, short numValores){
    long double total = 0.;
	short i;

	for(i = 0; i < numValores; i++){
		total += (valor[i] - media) * (valor[i] - media);
	}
	
	return total/numValores;
}