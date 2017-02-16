#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double r(int, int);
double b(int, int);
double c(int, int);

int main(){
	int numCasos, x, y;
    double rafael, beto, carlos;

    scanf("%d" , &numCasos);

	while(numCasos--){
		scanf("%d %d", &x, &y);

		rafael = r(x, y);
		beto = b(x, y);
		carlos = c(x, y);

		if(rafael > beto && rafael > carlos)
			printf("Rafael");
		else if(beto > rafael && beto > carlos)
			printf("Beto");
		else
			printf("Carlos");

		printf(" ganhou\n");
	}

	return 0;
}

double r(int x, int y){
	 return pow((3 * x), 2) + y * y;;
}

double b(int x, int y){
	return  2 * pow(x, 2) + pow((5 * y), 2);
}

double c(int x, int y){
	return -100 * x + pow(y, 3);
}
