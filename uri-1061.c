#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    short int diaI, diaF,
	          horaI, horaF,
	          minI, minF,
	          segI,segF;

    scanf("Dia %hd", &diaI);
	scanf("%hd : %hd : %hd\n", &horaI, &minI, &segI);
	scanf("Dia %hd", &diaF);
	scanf("%hd : %hd : %hd", &horaF, &minF, &segF);

     if(diaF > diaI) diaF -= diaI;
     else diaF = 0;
    
     if(horaF > horaI) horaF -= horaI;
     else if(horaF < horaI){
         horaF += (24 - horaI);
         diaF--;
     }
     else horaF = 0;
    
     if(minF > minI) minF -= minI;
     else if(minF < minI) minF = minI - minF;
     else minF = 0;

     if(segF > segI) segF -= segI;
     else if(segF < segI) segF = segI - segF;
     else segF = 0;
 
    printf("%hd dia(s)\n%hd hora(s)\n%hd minuto(s)\n%hd segundo(s)\n", diaF, horaF, minF, segF);

	return 0;
}