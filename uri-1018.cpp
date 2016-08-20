#include <iostream>

int main() {
	int valor, notaCem, notaCinq, notaVin, notaDez, notaCin, notaDois, notaUm;


	scanf("%i", &valor);
	
	int troco = valor;
	
	 notaCem = troco / 100;
    troco = troco - (notaCem *100);
     notaCinq = troco / 50;
    troco = troco - (notaCinq *50);
     notaVin = troco / 20;
    troco = troco - (notaVin *20);
     notaDez = troco / 10;
    troco = troco - (notaDez *10);
    notaCin = troco / 5;
    troco = troco - (notaCin *5);
     notaDois = troco / 2;
    troco = troco - (notaDois *2);
     notaUm = troco / 1;
    troco = troco - (notaUm *1);
    
	printf("%i\n", valor);
	printf("%i nota(s) de R$ 100,00\n", notaCem);
	printf("%i nota(s) de R$ 50,00\n", notaCinq);
	printf("%i nota(s) de R$ 20,00\n", notaVin);
	printf("%i nota(s) de R$ 10,00\n", notaDez);
	printf("%i nota(s) de R$ 5,00\n", notaCin);
	printf("%i nota(s) de R$ 2,00\n", notaDois);
	printf("%i nota(s) de R$ 1,00\n", notaUm);

    return 0;
}
