#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Jogador{
	int saq, bloq, ataq;
	int pSaq, pBloq, pAtaq;
};

int main(){
	short numJogadores;
	char nomeJogador[100];
	long tSaq, tBloq, tAtaq, tPSaq, tPBloq, tPAtaq;
	struct Jogador jogador;
	
	tSaq = tBloq = tAtaq = tPSaq = tPBloq = tPAtaq = 0;
	
	scanf("%hd", &numJogadores);
	
	while(numJogadores--){
		scanf("%s %d %d %d", nomeJogador, &jogador.saq, &jogador.bloq, &jogador.ataq);
		scanf("%d %d %d", &jogador.pSaq, &jogador.pBloq, &jogador.pAtaq);
		
        tSaq += jogador.saq;
        tBloq += jogador.bloq;
        tAtaq += jogador.ataq;	

        tPSaq += jogador.pSaq;
        tPBloq += jogador.pBloq;
        tPAtaq += jogador.pAtaq;
		
	}

	printf("Pontos de Saque: %.2lf %%.\n", (tPSaq*100.)/tSaq);
	printf("Pontos de Bloqueio: %.2lf %%.\n", (tPBloq*100.)/tBloq);
	printf("Pontos de Ataque: %.2lf %%.\n", (tPAtaq*100.)/tAtaq);
	
	return 0;
}
