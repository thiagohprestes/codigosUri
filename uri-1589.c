#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short numCasos;
     int raio, raio2;

     scanf("%hd" , &numCasos);

     while(numCasos--){
          scanf("%d %d" , &raio, &raio2);
          
          printf("%d\n", raio+raio2);
     }

	 return 0;
}