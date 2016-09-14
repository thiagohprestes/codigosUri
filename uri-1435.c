#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
      short n, linha, coluna, i, j, a = 1;
         
      while(1){
      	scanf("%hd" , &n);
      	if(n == 0) break;
      	j = i = n;
         for(linha = 1; linha <= i; linha++){
         	 for(coluna = 1; coluna <= j; coluna++){
                if(coluna == n || coluna == 1 || linha == 1 ||
                	linha == n)printf("%hd  ", a);
                else if{
                	
                }(coluna == n || coluna == 1 || linha == 1 ||
                	linha == n) printf("2  ");
         	 } 
         	 printf("\n");
         	 j = n;
         }
      }

	 return 0;
}