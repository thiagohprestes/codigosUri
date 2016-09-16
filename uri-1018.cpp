#include <iostream>

int main() {
	int valor, notaCem, notaCinq, notaVin, notaDez, notaCin, notaDois, notaUm;

	scanf("%i", &valor);
	
	int troco = valor;//troco recebe valor
	
     notaCem = troco / 100; //pegando a quantia de notas de 100
    troco -= notaCem *100;//pegando resto tirado as notas de 100
     notaCinq = troco / 50;//pegando notas de 50
    troco -= notaCinq *50;//pegando resto tirando notas de 50
     notaVin = troco / 20;//pegando notas de 20
    troco = notaVin *20;//pegando resto tirando notas de 20
     notaDez = troco / 10;//pegando notas de 10
    troco -= notaDez *10;//pegando resto tirando notas de 10
    notaCin = troco / 5;//pegando notas de 5
    troco -= notaCin *5;//pegando resto tirando notas de 5
     notaDois = troco / 2;//pegnando notas de 2
    troco -= notaDois *2;//pegando resto tirando notas de 2
     notaUm = troco / 1;//pegando resto tirando notas de 1 (agora so tem moedas neh, pra pesar na carteira)
    troco -= notaUm *1;//pegando resto tirando notas de 1
    
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
