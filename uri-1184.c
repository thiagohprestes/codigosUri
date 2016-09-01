#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TMATRIZ 12/*Definindo tamanho da matriz*/
int main(){
	 short linha, coluna;
	 char operacao;/*Recebendo char representando tipo da operacao*/
	 double matriz[TMATRIZ][TMATRIZ];
     long double soma = 0;

	 scanf("%c", &operacao);

	 for(linha = 0; linha < TMATRIZ; linha++){/*Percorrendo linhas da matriz*/
	 	 for(coluna = 0; coluna < TMATRIZ; coluna++){/*Percorrendo colunas da matriz*/
             scanf("%lf", &matriz[linha][coluna]);/*preenchendo matriz*/

         }    
	 }
     
     for(linha = 1; linha < TMATRIZ; linha++){/*Percorrendo matriz a partir da segunda linha*/
     	 for(coluna = 0; coluna < (TMATRIZ - 1); coluna++){/*Percorrendo colunas da matriz até penultima coluna*/
             if(linha > coluna)/*condicional para receber valores da diagonal inferior esquerda*/
                 soma += matriz[linha][coluna];/*incrementando valor a soma*/
         }
     }   
     
     if(operacao == 'S') printf("%.1Lf\n", soma);/*Se operacao for soma, exibe soma*/

     else if(operacao == 'M') printf("%.1Lf\n", soma/66);/*Se operacao for media, exibe media*/

	 return 0;
}