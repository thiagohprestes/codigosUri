#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TMATRIZ 12/*Definindo tamanho da matriz*/
int main(){
	 short int linha, coluna;
	 char operacao;/*Recebendo char representando tipo da operacao*/
	 double matriz[TMATRIZ][TMATRIZ];
     long double soma = 0.0;

	 scanf("%c", &operacao);

	 for(linha = 0; linha < TMATRIZ; linha++){/*Percorrendo linhas da matriz*/
	 	 for(coluna = 0; coluna < TMATRIZ; coluna++){/*Percorrendo colunas da matriz*/
             scanf("%lf", &matriz[linha][coluna]);/*preenchendo matriz*/

         }    
	 }

     for(linha = 1; linha < (TMATRIZ - 1); linha++){/*Percorrendo linhas da matriz a partir da segunda até penultima linha*/
     	 for(coluna = 7; coluna < TMATRIZ; coluna++){/*Percorrendo colunas da matriz a partir da oitava coluna*/
             if(linha+coluna >= 12 && coluna > linha)
                 soma += matriz[linha][coluna];/*incrementando valor a soma*/
         } 
      } 
     
     if(operacao == 'S') printf("%.1Lf\n", soma);/*Se operacao for soma, exibe soma*/

     else if(operacao == 'M') printf("%.1Lf\n", soma/30);/*Se operacao for media, exibe media*/

	 return 0;
}
