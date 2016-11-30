#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
	float ladoA, ladoB, ladoC;
} RegArqTri;

void ordenaElementos(RegArqTri *);
int tipoLados(RegArqTri);

int main(){
	RegArqTri triangulo;
	double p;

	FILE *vArqTri;
	
	vArqTri = fopen("Triangulos.dat", "r");
	if(vArqTri == NULL){	
		printf("ERRO AO ABRIR ARQUIVO Triangulos.dat\n\n");
		return 1;
	}
	
	fread(&triangulo, sizeof(RegArqTri), 1,vArqTri);
	
	while(!feof(vArqTri)){
		ordenaElementos(&triangulo);
		
		switch(tipoLados(triangulo)){
			case 0: printf("%.3f %.3f %.3f nao formam um triangulo\n", triangulo.ladoA, triangulo.ladoB, triangulo.ladoC); break;	
			case 1: printf("Tipo: Equilatero"); break;
			case 2: printf("Tipo: Isosceles"); break;
			case 3: printf("Tipo: Escaleno"); break;
		}
		
		if(tipoLados(triangulo)){
			p = (triangulo.ladoA + triangulo.ladoB + triangulo.ladoC)/2;
			printf("    Area: %.3lf\n", sqrt(p*(p-triangulo.ladoA)*(p-triangulo.ladoB)*(p-triangulo.ladoC)));
		}
		
		fread(&triangulo, sizeof(RegArqTri), 1,vArqTri);
	}
	
	fclose(vArqTri);
	
	return 0;
}

void ordenaElementos(RegArqTri *lados){
	float aux;
	if(lados->ladoA > lados->ladoB && lados->ladoA > lados->ladoC){
		aux = lados->ladoC; lados->ladoC = lados->ladoA; lados->ladoA = aux;
	}
	
	else if(lados->ladoB > lados->ladoA && lados->ladoB > lados->ladoC){
		aux = lados->ladoC; lados->ladoC = lados->ladoB; lados->ladoB = aux;
	}
	
	if(lados->ladoB < lados->ladoA && lados->ladoB < lados->ladoC){
		aux = lados->ladoA; lados->ladoA = lados->ladoB; lados->ladoB = aux;
	}
	
	else if(lados->ladoC < lados->ladoA && lados->ladoC < lados->ladoB){
		aux = lados->ladoA; lados->ladoA = lados->ladoC; lados->ladoC = aux;
	}
	
}

int tipoLados(RegArqTri lados){
	int i;
	char tipoTri;

    if(lados.ladoA + lados.ladoB <= lados.ladoC) tipoTri = 0;//n forma triangulo
	  else if(lados.ladoA == lados.ladoB || lados.ladoB == lados.ladoC){
		if(lados.ladoA == lados.ladoC) tipoTri = 1;//triangulo equilatero
	    else tipoTri = 2;//triangulo isosceles
	}
	else tipoTri = 3;//triangulo escaleno

	return tipoTri;
}
