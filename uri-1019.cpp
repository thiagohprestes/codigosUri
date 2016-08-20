#include <iostream>

int main() {
	int segundos, resto, resto2, horas, minutos;
	
	scanf("%i", &segundos);
	
	horas = segundos / 3600;
	resto = segundos - (horas * 3600);
	
	minutos = resto / 60;
	resto2 = resto - (minutos * 60);
	
	segundos = resto2;
	
	printf("%i:%i:%i\n", horas, minutos, segundos);

    return 0;
}
