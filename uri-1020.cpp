#include <iostream>

int main() {
	int dias, anos, meses, resto;
	
	scanf("%i", &dias);
	
	anos = dias / 365;//recebendo a parte refente aos anos
	resto = dias - (anos * 365);//resto vale dias menos a parte de anos
	
	meses = resto / 30;//recebendo a parte referente aos meses
        dias = resto - (meses * 30);//dias eh igual ao que sobra
	
	printf("%i ano(s)\n", anos);
	printf("%i mes(es)\n", meses);
	printf("%i dia(s)\n", dias);

    return 0;
}
