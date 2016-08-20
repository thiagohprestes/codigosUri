#include <iostream>

int main() {

 double valor, notas;
	long double moedas = 0;
	int nCem, nCin, nVin, nDez, nCinco, nDois,
	    mUm, mCin, mVin, mDez, mCinco, mUmc;
		
	scanf("%lf", &valor);
	
	moedas = (valor - (int)valor)*100;
	
	notas = valor; 
	
	nCem = valor/100;
	notas -= (nCem*100);
	
	nCin = notas/50;
	notas -= (nCin*50);
	
	nVin = notas/20;
	notas -= (nVin*20);
	
	nDez = notas/10;
	notas -= (nDez*10); 
	
	nCinco = notas/5;
	notas -= (nCinco*5);
	
	nDois = notas/2;
	notas -= (nDois*2);
	
	mUm = notas;
	
	mCin = moedas/50;
	moedas -= (mCin*50);
	
	mVin = moedas/25;
	moedas -= (mVin*25);
	
	mDez = moedas/10;
	moedas -= (mDez*10);
	
	mCinco = moedas/5;
	moedas -= (mCinco*5); 
	
	mUmc = moedas;
	
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
