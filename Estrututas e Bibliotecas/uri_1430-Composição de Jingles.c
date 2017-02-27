#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float notas(char);

int main(){
  char composicao[203];
  int i, len, compasso;
  float somaFracoes;

  while(scanf("%s", composicao) && composicao[0] != '*'){
    len = strlen(composicao);

	for (i = 1, compasso = 0; i < len; i++){	
		for(somaFracoes = 0; composicao[i] != '/'; i++)
			somaFracoes += notas(composicao[i]);

	    if(somaFracoes == 1.)
	    	compasso++;
    }

    printf("%d\n", compasso);
  }

  return 0; 
}

float notas(char nota){	
	float tempNotas[] = {1., 0.5, 0.25, 0.125, 0.0625, 0.03125, 0.015625};
	char nomeNota[] = "WHQESTX", i;

	for(i = 0; nota != nomeNota[i]; i++);
	return tempNotas[i];	
}
