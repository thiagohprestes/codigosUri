#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 short iniAbas, acoes;
	 char acao[7];
	 
	 scanf("%hd %hd", &iniAbas, &acoes);
	 
	 while(acoes--){
		 scanf("%s", acao);
		 if(strcmp(acao, "clicou") == 0) iniAbas--;
		 else iniAbas++;
	 }
	 printf("%hd\n", iniAbas);
	 
	 return 0;
}
