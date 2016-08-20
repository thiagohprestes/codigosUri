#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 short int numCasos, i = 0, anos = 0;
     long int pA, pB;
     double g1, g2;

	 scanf("%hd", &numCasos);

	 while(i < numCasos){
         scanf("%ld %ld %lf %lf", &pA, &pB, &g1, &g2);/*recebendo populacoes e taxa de cresc. popul.*/

         while(pA <= pB){/*rodando enquanto populacao A eh menor que populacao B*/
         	pA += (long int)((pA*g1)/100);/*calculando cresc. de A em um ano*/
         	pB += (long int)((pB*g2)/100);/*calculando cresc. de B em um ano*/

             anos++;

            if(anos > 100){/*caso anos seja maior que 100 sai do laco*/
                anos = 101;/*atribui 101, mas poderia ser qlqr valor*/
         		break;
         	}
         }
         if(anos == 101) printf("Mais de 1 seculo.\n");
         else printf("%d anos.\n", anos);
        
         anos = 0;/*zera a variavel anos para ser usada novamente*/
         i++;
	 }

	 return 0;
}