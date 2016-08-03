#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    short int diaI, diaF,
	      horaI, horaF,
	      minI, minF,
	      segI,segF;

    scanf("Dia %hd", &diaI);
	scanf("%hd : %hd : %hd\n", &horaI, &minI, &segI);
	scanf("Dia %hd", &diaF);
	scanf("%hd : %hd : %hd", &horaF, &minF, &segF);

	if(segF >= segI) segF -= segI;
	else segF += 60 - segI;
    
    if(minF >= minI) minF -= minI;
	else minF = 60 - minI;

	if(horaF >= horaI){
	     horaF -= horaI;
	     diaF -= diaI;

	} else{
	     horaF += 24 - horaI;
	     diaF -= (diaI + 1);	    
    }
    if(diaF - diaI == 1){
    	if(horaF < horaI){
    		diaF--;
    		if(minF < minI){
    			horaF = 23;
    			if(segF < segI){
    				minF = 59;
    			}
    		}
    	}
    }
    
    printf("%hd dia(s)\n%hd hora(s)\n%hd minuto(s)\n%hd segundo(s)\n", diaF, horaF, minF, segF);

	return 0;
}
