#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short int alturaPulo, numCanos, i = 1;

     scanf("%hd %hd", &alturaPulo, &numCanos);

     short int cano[numCanos];/*definindo numeros de canos*/
     
     scanf("%hd", &cano[0]);/*recebendo altura do primeiro cano*/

     while(i < numCanos){
     	 scanf("%hd", &cano[i]);/*recebendo altura do cano*/
     	 if(cano[i] >= cano[i - 1]){
         /*testando de cano é maior que o cano anterior*/
             if((cano[i] - cano[i - 1]) > alturaPulo){
             /*testando se cano subtraído do menor eh maior que a altura do pulo*/
                 printf("GAME OVER\n");
                 return 0;
             }
         }

         else if((cano[i - 1] - cano[i]) > alturaPulo){
         /*testando se cano subtraído do menor eh maior que a altura do pulo*/
         	 printf("GAME OVER\n");
             return 0;
         }

         i++;
     }

     printf("YOU WIN\n"); /*caso pulou todos canos, voce venceu*/	 

	 return 0;
}