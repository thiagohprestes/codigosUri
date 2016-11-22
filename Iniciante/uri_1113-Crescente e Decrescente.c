#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
	int num, num2;/*variaveis de tipo inteiro*/

	while(1){/*while rodando sem condicao de parada aqui*/
         scanf("%d %d", &num, &num2);/*recebendo dois inteiros*/

         if(num == num2) break;/*se os dois inteiros recebidos forem iguais, sai do laco*/

         if(num > num2) printf("Decrescente\n");/*se num maior que num 2, imprime crescente*/
         else printf("Crescente\n");/*se num2 > num, imprime decrescente*/         
	}

	return 0;
}
