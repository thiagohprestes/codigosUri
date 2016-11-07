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

     segF -= segI;
     minF -= minI;
     horaF -= horaI;
     diaF -= diaI;

     if (segF < 0){
        segF += 60;
        minF--;
     }
     
     if (minF < 0){
        minF += 60;
        horaF--;
     }

    if (horaF < 0){
        horaF += 24;
        diaF--;
     }
 
    printf("%hd dia(s)\n%hd hora(s)\n%hd minuto(s)\n%hd segundo(s)\n", diaF, horaF, minF, segF);

    return 0;
}