#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TMATRIZ 12/*Definindo tamanho da matriz*/
int main(){
     short int linha, coluna;
     char operacao;/*Recebendo char representando tipo da operacao*/
     double matriz[TMATRIZ][TMATRIZ];
     long double soma = 0;

      scanf("%c", &operacao);

       for(linha = 0; linha < TMATRIZ; linha++){/*Percorrendo linhas da matriz*/
	   for(coluna = 0; coluna < TMATRIZ; coluna++){/*Percorrendo colunas da matriz*/
             	scanf("%lf", &matriz[linha][coluna]);/*preenchendo matriz*/
		if(coluna > linha)/*condicional para receber valores da diagonal superior direita*/
                 soma += matriz[linha][coluna];/*incrementando valor a soma*/
           }    
        }
     
     operacao == 'S' ? printf("%.1Lf\n", soma), printf("%.1Lf\n", soma/66);
	
    return 0;
}
