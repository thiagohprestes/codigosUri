#include <iostream>

int main() {

 double valor, notas;
	long double moedas = 0;
	int nCem, nCin, nVin, nDez, nCinco, nDois,
	    mUm, mCin, mVin, mDez, mCinco, mUmc;
		
	scanf("%lf", &valor);
	
	moedas = (valor - (int)valor)*100;//moedas vale a parte decimal de valor
	
	notas = valor;// notas recebe valor
	
	nCem = valor/100;//pegando parte de notas de 100
	notas -= (nCem*100);//notas decrementa a parte das notas de 100
	
	nCin = notas/50;//pegando parte de notas de 50
	notas -= (nCin*50);//notas decrementa a parte das notas de 50
	
	nVin = notas/20;//pegando parte de notas de 20
	notas -= (nVin*20);//notas decrementa a parte das notas de 20
	
	nDez = notas/10;//pegando parte de notas de 10
	notas -= (nDez*10);//notas decrementa a parte das notas de 10
	
	nCinco = notas/5;//pegando parte de notas de 5
	notas -= (nCinco*5);//notas decrementa a parte das notas de 5
	
	nDois = notas/2;//pegando parte de notas de 2
	notas -= (nDois*2);//notas decrementa a parte das notas de 2
	
	mUm = notas;
	
	mCin = moedas/50;//pegando parte de moedas de 50
	moedas -= (mCin*50);//moedas decrementa a parte das moedas de 50
	
	mVin = moedas/25;//pegando parte de moedas de 25
	moedas -= (mVin*25);//moedas decrementa a parte das moedas de 25
	
	mDez = moedas/10;//pegando parte de moedas de 10
	moedas -= (mDez*10);//moedas decrementa a parte das moedas de 10
	
	mCinco = moedas/5;//pegando parte de moedas de 5
	moedas -= (mCinco*5);//moedas decrementa a parte das moedas de 5
	
	mUmc = moedas;//moedas de um centavo eh o que sobra de moedas
	
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n", nCem);
	printf("%d nota(s) de R$ 50.00\n", nCin);
	printf("%d nota(s) de R$ 20.00\n", nVin);
	printf("%d nota(s) de R$ 10.00\n", nDez);
	printf("%d nota(s) de R$ 5.00\n", nCinco);
	printf("%d nota(s) de R$ 2.00\n", nDois);
	
	printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", mUm);
	printf("%d moeda(s) de R$ 0.50\n", mCin);
	printf("%d moeda(s) de R$ 0.25\n", mVin);
	printf("%d moeda(s) de R$ 0.10\n", mDez);
	printf("%d moeda(s) de R$ 0.05\n", mCinco);
	printf("%d moeda(s) de R$ 0.01\n", mUmc);

    return 0;
}
