#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
      short n, j , i, linha, coluna;
         
      while(scanf("%hd" , &n) != 0){
      	linha = coluna = n;
         for(i = 0; linha < 1; linha++){
         	 for(j = 0; coluna < j; linha++){
                printf("%hd  ", j);
         	 } 
         	 printf("\n");
         }
      }

	 return 0;
}