#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
  int alumni, jantares, tamMatriz, i, j, participou;

  while(scanf("%d %d", &alumni, &jantares) && alumni+jantares){
    int particip[jantares][alumni];
    
    for(i= 0; i < jantares; i++)
      for(j = 0; j < alumni; j++)
        scanf("%d", &particip[i][j]);

    for(i = participou = 0; i < alumni; i++){
      for(j = 0; j < jantares; j++)
        participou += particip[j][i];
        
        if(participou == jantares)
          break;
        

        participou = 0;
    }

    participou ? puts("yes") : puts("no");
    //participou ? printf("yes\n"): printf("no\n");

  }

  return 0; 
}
