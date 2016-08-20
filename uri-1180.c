#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short int n, i = 1, posicao = 0;

     scanf("%hd", &n);

     int x[n];

     scanf("%d", &x[0]);
     int menor = x[0];

     while(i < n){
       scanf("%d", &x[i]);

       if (x[i] < menor){
         menor = x[i];
         posicao = i;
       } 

       i++;
     }	

     printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);

	 return 0;
}