#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
	char probl;
	int  tempo;
	char julg[10];
}Submissao;

int compara(const void *, const void *);

int main(){
	int n, i, totTempo, auxTotTempo, totProbCorrect;
	char charProb;
	Submissao *subm;

	while(scanf("%d", &n) && n){
		subm = (Submissao *) malloc(sizeof(Submissao) * n);

		for(i = 0; i < n; i++)
			scanf(" %c %d %s" , &subm[i].probl, &subm[i].tempo, subm[i].julg);

		qsort(subm, n, sizeof(Submissao), compara);

		for(charProb = subm[i].probl, i = totProbCorrect = totTempo = 0; i < n; charProb = subm[i].probl){
			for(auxTotTempo = 0; i < n && charProb == subm[i].probl; i++){
					if(!strcmp(subm[i].julg,"correct")){
						totTempo += (auxTotTempo + subm[i].tempo);
						totProbCorrect++;
						while(charProb == subm[i].probl) i++;
						break;
					}

					auxTotTempo += 20;
			}	
		}

		printf("%d %d\n", totProbCorrect, totTempo);
	}

	 return 0;
}

int compara(const void *p1, const void *p2){
	Submissao *i = (Submissao *)p1, *j = (Submissao *)p2;

	if(i->probl > j->probl)
		return 1;
	else if(i->probl < j->probl)
		return -1;
	else
		return 0;
}
