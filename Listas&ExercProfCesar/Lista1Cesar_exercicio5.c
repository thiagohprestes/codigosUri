#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int tipoLados(double *, int);
long double areaTriangulo(double, double, double);
void ordenaVetor(double *, int);
void imprimeTTriang(int, double *);

int main(){
	double lados[12][3];
	long double total;
	short i, j;

	for(i = 0; i < 12; i++){
		for(j = 0; j < 3; j++){
			scanf("%lf", &lados[i][j]);
			total += lados[i][j];
		}

		imprimeTTriang(tipoLados(&lados[i][0], 3), &lados[i][0]);
		if(tipoLados(&lados[i][0], 3) != 0) printf("    Area: %.3Lf\n", areaTriangulo(lados[i][0], lados[i][1], lados[i][2]));
	}

	return 0;
}

void ordenaVetor(double *lados, int tam){
	int i;
	double aux;
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

void imprimeTTriang(int tipoTri, double *lado){

	switch(tipoTri){
		case 0: printf("%.3lf %.3lf %.3lf nao formam triangulo\n",
                        lado[0], lado[1], lado[2]); break;
		case 1: printf("Tipo: equilatero"); break;
		case 2: printf("Tipo: isosceles"); break;
		case 3: printf("Tipo: escaleno"); break;
	}
}

int tipoLados(double *lado, int tam){
	int i;
	short tipoTri;

	ordenaVetor(&lado[0], 3);
    if(lado[0] + lado[1] <= lado[2]) tipoTri = 0;//n forma triangulo
	  else if(lado[0] == lado[1] || lado[1] == lado[2]){
		if(lado[0] == lado[2]) tipoTri = 1;//triangulo equilatero
	    else tipoTri = 2;//triangulo isosceles
	}
	else tipoTri = 3;//triangulo escaleno

	return tipoTri;
}

long double areaTriangulo(double lado, double lado2, double lado3){
	long double p = (lado + lado2 + lado3)/2;

	long double area = sqrt(p*(p-lado)*(p-lado2)*(p-lado3));
	return area;
}
