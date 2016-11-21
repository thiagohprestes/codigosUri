#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int tipoLados(int *);
void ordenaVetor(int *, int);

int main(){
	int lado[3];
    	 
	scanf("%d %d %d", &lado[0], &lado[1], &lado[2]);
	
	ordenaVetor(lado, 3);
  
	switch(tipoLados(lado)){
		case 0: printf("Invalido\n"); break;
		case 1: printf("Valido-Equilatero\n"); break;
		case 2: printf("Valido-Isoceles\n"); break;
		case 3: printf("Valido-Escaleno\n"); break;
	}
	
	if(!tipoLados(lado));
	else if((lado[0]*lado[0]) + (lado[1]*lado[1]) == lado[2]*lado[2])
		 printf("Retangulo: S\n");  
	else printf("Retangulo: N\n");

	return 0;
}

int tipoLados(int *lado){
	int tipoTri;
	
    if(lado[0] + lado[1] <= lado[2]) tipoTri = 0;//n forma triangulo
	  else if(lado[0] == lado[1] || lado[1] == lado[2]){
		if(lado[0] == lado[2]) tipoTri = 1;//triangulo equilatero
	    else tipoTri = 2;//triangulo isoceles
	}
	else tipoTri = 3;//triangulo escaleno

	return tipoTri;
}

void ordenaVetor(int *lados, int tam){
	int i;
	int aux;
	int roda = tam;
	while(roda--){
		for(i = 0; i < tam - 1; i++){
			if(lados[i] > lados[i+1]){
				aux = lados[i+1];
				lados[i+1] = lados[i];
				lados[i] = aux;
			}
		}
	}
}
