#include <iostream>

int main(){
	int cod, qtde;
	float valor;
	
	scanf("%d %d", &cod, &qtde);
	
	switch (cod){//verifica a qual valor corresponde o codigo
	    case 1: valor = 4.0; break;
	    case 2: valor = 4.5; break;
	    case 3: valor = 5.0; break;
	    case 4: valor = 2.0; break;
	    case 5: valor = 1.5; break;
	}
	
	printf("Total: R$ %.2lf\n", qtde*valor);//calcula e imprime o valor total
   
    return 0;
}
