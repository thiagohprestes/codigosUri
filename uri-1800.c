#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main(){
     short int Q, E, i = 0, j = 0, visitou;
     /*Q = Escritorios visitados na ultima semana
       E = Escritorios visitados nos ultimos 2 dias
     */

     scanf("%hd %hd", &Q, &E);

     short int Si[E], Ci[Q];
     /*Criando vetores de sinalização de escritorios visitados*/

     while(i < E){
     	 scanf("%hd", &Si[i]);
     	 /*Recebendo escritorios visitados nos ultimos 2 dias*/
     	 i++;
     }
     
     i = 0;

     while(i < Q){
     	 scanf("%hd", &Ci[i]);
     	 /*Recebendo escritorios visitados na ultima semana*/
     	 i++;
     }

     i = 0;

     while(i < Q){
     	 visitou = FALSE;/*visitou é false por default*/
     	 while(j < Q){
             if(j < E){
             	 if(Ci[i] == Si[j]){
                 /*Comparando escritorios da ultima semana com os dois dias, verificando se ele já foi visitado*/
                 visitou = TRUE;
                 break;
             } 

              }

             if(Ci[i] == Ci[j] && i > j){
             /*Comparando escritorios da ultima semana com os da ultima semana, verificando se ele já foi inserido na entrada*/
             	visitou = TRUE;
             	break;
             }

     	     j++;
         }

        if (visitou) printf("0\n");/*Se escritório foi visitado, exibe '0'*/
        else printf("1\n"); /*Se escritório n visitado, exibe '1'*/

        i++;
        j = 0;
     }


	 return 0;
}