#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
    
int main(){
	int num, num2, /*variaveis para armazenar dois inteiros de entrada*/ 
      j, /*contador para controle dos for*/
      total; /*variavel para armazenar a soma dos valores consecutivos entre num e num2*/
     
    while(1){ /*while rodando indefinidamente*/
    	total = 0; /*a cada entrada no while total recebe 0*/
	   
     scanf("%d %d", &num, &num2); /*recebe dois inteiros*/

	   if(num <= 0 || num2 <= 0) break;/*condicao que verifica se pelo menos um dos dois valores digitados sao maiores que 0*/
    
       if(num < num2){
           for(j = num; j <= num2; j++){ /*for rodando de [num,num2]*/
           	  printf("%d ", j);/*exibindo j*/
              total += j;/*incrementando total com valor de j*/
           }
        } else if(num2 < num){
           for(j = num2; j <= num; j++){/*for rodando de [num2,num]*/
           	  printf("%d ", j);
              total += j;
           }
        }else total = num;/*caso os valores sejam iguais, total recebe num*/
       
       printf("Sum=%d\n", total);/*exibe soma dos valores compreendidos de num para num2 ou vice-versa, depende do fator crescente ou decrescente*/
       
    }
    
	return 0;
}   