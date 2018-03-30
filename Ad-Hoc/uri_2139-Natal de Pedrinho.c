#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int meses[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
  int dia, mes;
  int totDias, i;

  while(scanf("%d %d", &mes, &dia) != EOF){

    for(i = 0, totDias = dia; i < mes-1; i++)
      totDias += meses[i]; 
  
    if(totDias == 359) printf("E vespera de natal!\n");
    else if(totDias == 360) printf("E natal!\n");
    else if(totDias > 360) printf("Ja passou!\n");
    else printf("Faltam %d dias para o natal!\n", 360 - totDias);

  }

  return 0; 
}
