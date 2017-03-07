#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
  int numCasos, i, tMembros, pCapitao, capitao;

  scanf("%d", &numCasos);  

  for(i = 1; i <= numCasos; i++){
    scanf("%d", &tMembros);
   
    pCapitao = tMembros/2;

    while(tMembros--){
      tMembros == pCapitao ? scanf("%d", &capitao) : scanf("%*d");
    }
 
    printf("Case %d: %d\n", i, capitao);
  }

  return 0; 
}
