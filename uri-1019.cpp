#include <iostream>

int main() {
	int segundos, resto, resto2, horas, minutos;
	
	scanf("%i", &segundos);
	
	horas = segundos / 3600;//pegando a parte referente a horas
	resto = segundos - (horas * 3600);//resto vale total em segundos menos a parcela de horas
	
	minutos = resto / 60;//pegando a parte referente aos minutos
	resto2 -= minutos * 60;//resto subtrai a parte referente aos minutos
	
	segundos = resto2;//o que sobra eh referente aos segundos
	
	printf("%i:%i:%i\n", horas, minutos, segundos);

    return 0;
}
