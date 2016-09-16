#include <iostream>

int main() {
	int r;
	double pi = 3.14159;
	
	scanf("%i", &r);//recebendo raio da esfera
	
    printf("VOLUME = %.3f\n", (4/3.0) * pi * r * r * r);//calculando volume da esfera e imprimindo valor com 3 casas decimais

    return 0;
}
