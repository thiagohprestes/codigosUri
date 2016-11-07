#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){

 short int numCasos, i = 0; /*variavel para qtde de casos*/
 int num, /*variavel para primeiro numero*/
     num2, /*variavel para segundo numero*/
     j, /*variavel para controle do for */
     total; /*variavel para armazenar total*/

 scanf("%hd", &numCasos);/*recebe a qtde de casos que serao testados*/

 while(i < numCasos){/*compara i com num de casos e roda enquanto i eh menor*/
   
    total = 0;/*variavel para armazenar valor total, zera sempre que entra no while*/

    scanf("%d %d", &num, &num2); /*recebe dois numeros inteiros*/

    if(num < num2){/*verifica se num eh menor que num 2*/
      for(j = num+1; j < num2; j++){/*for roda de ]num,num2[*/
         if(j % 2 != 0) total += j;/*verifica se j eh impar, caso sim, total concatena j*/
      }
    }
    else if(num2 < num){/*verifica se num 2 eh menor que num*/
      for(j = num2+1; j < num; j++){/*inverte os valores para j, para rodar em ordem crescente ]num2,num[*/
         if(j % 2 != 0) total += j;/*mesma verificacao do interior do for anterior*/
      }
    }else total = 0; /*caso os valores de num e num2 sejam iguais, total recebe 0*/

     printf("%d\n", total);/*imprime total da soma dos impares entre num e num2 exclusos esses*/

 i++;/*incrementa i | i = i+1*/
 }

 return 0;
}
