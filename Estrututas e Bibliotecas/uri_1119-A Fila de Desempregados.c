#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef enum{
	horario, anti
}direcao;

struct RegVitima{
	int numVitima;
	struct RegVitima *ant;
	struct RegVitima *prox;
};

typedef struct RegVitima TVimita;

TVimita *preencheLista(short);
TVimita *excluiReg(TVimita *, TVimita *);
int totRegs(TVimita *);
TVimita *correLista(TVimita *lista, short , direcao);

int main(){ 
	short n, k, m, i;
	TVimita *iniRoda, *juizK, *juizM, *auxK, *auxM;

	while(scanf("%hd %hd %hd" , &n, &k, &m) * (n+k+m)){
		iniRoda = preencheLista(n);
		juizK = iniRoda;
		juizM = iniRoda->ant;
		
		while(totRegs(iniRoda) > 2){
			
			juizK = correLista(juizK, k, horario);
			juizM = correLista(juizM, m, anti);

			(juizK->prox == juizM) ? (auxK = juizM->prox) :
									(auxK = juizK->prox);
			(juizM->ant == juizK)  ? (auxM = juizK->ant) :
									(auxM = juizM->ant);

			if(juizK == juizM){
				printf("%3hd,", juizM->numVitima);
				iniRoda = excluiReg(iniRoda, juizK);
				
			}else{
				printf("%3hd%3hd,", juizK->numVitima, juizM->numVitima);
				iniRoda = excluiReg(iniRoda, juizM);
				iniRoda = excluiReg(iniRoda, juizK);
			}

			juizK = auxK;
			juizM = auxM;
		}

		if(totRegs(iniRoda) == 2){
			juizK = correLista(juizK, k, horario);
			juizM = correLista(juizM, m, anti);

			if(juizK == juizM){
				printf("%3hd,%3hd\n", juizK->numVitima, juizK->prox->numVitima);
			}
			else
				printf("%3hd%3hd\n", juizK->numVitima, juizK->prox->numVitima);

		}else{
			printf("%3hd\n", iniRoda->numVitima);
		}
	}

	return 0;
}

TVimita *preencheLista(short numRegs){
	TVimita *inicio = NULL, *regAtual, *regAnt;
	short i;

	for(i = 1; i <= numRegs; i++){
		regAtual = (TVimita *)malloc(sizeof(TVimita));

		regAtual->numVitima = i;

		if(inicio == NULL)
			inicio = regAtual;
		else {
			regAnt->prox = regAtual;
			regAtual->ant = regAnt;
		}

		regAnt = regAtual;
	}

	inicio->ant = regAtual;
	regAtual->prox = inicio;

	return inicio;
}

TVimita *excluiReg(TVimita *lista, TVimita *regExcluir){
	TVimita *regAnt = regExcluir->ant; 
	TVimita *regProx = regExcluir->prox;
	
	if(regExcluir == lista){
		lista = lista->prox;
		regAnt->prox = lista; 	
		lista->ant = regExcluir->ant;
	}
	else{
		regAnt->prox = regProx;
		regProx->ant = regAnt;
	}
	free(regExcluir);

	return lista;
}

int totRegs(TVimita *lista){
	TVimita *regAtual = lista;
	short i;

	for(i = 1; lista != regAtual->prox;i++)
		regAtual = regAtual->prox;

	return i;
}

TVimita *correLista(TVimita *lista, short n, direcao sentido){
	TVimita *regAtual = lista;

	if(sentido == 0)
		while(--n)
			regAtual = regAtual->prox;
	else
		while(--n)
			regAtual = regAtual->ant;

	return regAtual;
}
