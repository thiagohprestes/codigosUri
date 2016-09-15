#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
      short qtdeCursos;
      char curso[73];

      scanf("%hd" , &qtdeCursos);

      while(qtdeCursos--){
         scanf("%s" , curso);
      }

      printf("Ciencia da Computacao\n");

  	 return 0;
}