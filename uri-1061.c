#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    short diaI, diaF, horaI, horaF, minI, minF,
	      segI,segF;
    int totalSegI, totalSegF;

    scanf("Dia %d",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);

    totalSegI = diaI * 24 * 3600 + horaI * 3600 + minI * 60 + segI;/*convertendo tudo para segundos*/
    totalSegF = diaF * 24 * 3600 + horaF * 3600 + minF * 60 + segF;

    totalSegF -= totalSegI;/*subtraindo valor final de inicial*/
         
    diaF = ((totalSegF/3600))/24;/*calculando dias totais e convertendo para dias*/
    horaF = (totalSegF - diaF * 24 * 3600)/3600;/*calculando horas totais e convertendo para horas*/
    minF = (totalSegF - diaF * 24 * 3600 - horaF * 3600)/60;/*calculando minutos totais e convertendo para minutos*/
    segF = (totalSegF - diaF * 24 * 3600 - horaF * 3600 - minF * 60);/*calculando segundos totais*/
    
    printf("%hd dia(s)\n%hd hora(s)\n%hd minuto(s)\n%hd segundo(s)\n", diaF, horaF, minF, segF);

	return 0;
}