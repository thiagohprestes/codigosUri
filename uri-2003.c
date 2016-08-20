#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define HORAENCONTRO 480
#define TEMPOMAX 60

int main(){
	 int hora, min, atraso;
   
	 while(scanf("%d:%d", &hora, &min) != EOF){
         atraso = (((hora * 60) + min + TEMPOMAX) - HORAENCONTRO);
         /*Calculando tempo de atraso*/
         if(atraso > 0) printf("Atraso maximo: %d\n", atraso);
         /*testanto se ele não está adiantado*/
         else printf("Atraso maximo: 0\n");
         /*se estiver adiantado o atraso eh igual a 0*/
	 }

	 return 0;
}