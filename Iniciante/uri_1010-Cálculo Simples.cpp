#include <iostream>

int main() {
 
	int cod, cod2, num, num2;
	float valorpeca, valorpeca2;
	
	scanf("%i %i %f", &cod, &num, &valorpeca);
	
	scanf("%i %i %f", &cod2, &num2, &valorpeca2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", valorpeca*num + valorpeca2*num2);//calculando valor total a pagar e imprimindo

    return 0;
}
