#include <iostream>

int main() {
	int dias, anos, meses, resto;
	
	scanf("%i", &dias);
	
	anos = dias / 365;
	resto = dias - (anos * 365);
	
	meses = resto / 30;
       dias = resto - (meses * 30);
	
	printf("%i ano(s)\n", anos);
	printf("%i mes(es)\n", meses);
	printf("%i dia(s)\n", dias);

    return 0;
}
