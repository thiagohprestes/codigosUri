#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TMATRIZ 12
int main(){
	 short l, linha, coluna;
	 char operacao;
	 double matriz[TMATRIZ][TMATRIZ], soma = 0;

	 scanf("%hd", &l);
	 scanf(" %c", &operacao);

	 for(linha = 0; linha < TMATRIZ; linha++){
	 	 for(coluna = 0; coluna < TMATRIZ; coluna++){
             scanf("%lf", &matriz[linha][coluna]);
             if(l == linha) soma += matriz[linha][coluna];
         }    
	 } 
     
     if(operacao == 'S') printf("%.1lf\n", soma);

     else if(operacao == 'M') printf("%.1lf\n", soma/TMATRIZ);

	 return 0;
}