#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short int ladoA, ladoB, ladoC, ladoD, triangulo = 0;

     scanf("%hd %hd %hd %hd", &ladoA, &ladoB, &ladoC, &ladoD);
    
     if(abs(ladoA - ladoB) < ladoC && ladoC < (ladoA + ladoB) ) triangulo++;

     if(abs(ladoA - ladoC) < ladoB && ladoB < (ladoA + ladoC) ) triangulo++;

     if(abs(ladoA - ladoB) < ladoC && ladoC < (ladoA + ladoB) ) triangulo++;
     
     if(triangulo == 3){ 
     	printf("S\n");
     	return 0;

     } 

     else{
         triangulo = 0;

         if(abs(ladoA - ladoB) < ladoD && ladoD < (ladoA + ladoB) ) triangulo++;

         if(abs(ladoA - ladoD) < ladoB && ladoB < (ladoA + ladoD) ) triangulo++;
  
         if(abs(ladoB - ladoD) < ladoA && ladoA < (ladoB + ladoD) ) triangulo++;
     }
     
     if(triangulo == 3){ 
     	printf("S\n");
     	return 0;

     } 
      
     else{
         triangulo = 0;

         if(abs(ladoA - ladoC) < ladoD && ladoD < (ladoA + ladoC) ) triangulo++;

         if(abs(ladoA - ladoD) < ladoC && ladoC < (ladoA + ladoD) ) triangulo++;
  
         if(abs(ladoC - ladoD) < ladoA && ladoA < (ladoC + ladoD) ) triangulo++;
     }

     if(triangulo == 3){ 
     	printf("S\n");
     	return 0;

     } 
      
     else{
         triangulo = 0;

         if(abs(ladoB - ladoC) < ladoD && ladoD < (ladoB + ladoC) ) triangulo++;

         if(abs(ladoB - ladoD) < ladoC && ladoC < (ladoB + ladoD) ) triangulo++;
  
         if(abs(ladoC - ladoD) < ladoB && ladoB < (ladoC + ladoD) ) triangulo++;
     }

     if(triangulo == 3){ 
     	printf("S\n");
     	return 0;

     } 
     
     printf("N\n");


	 return 0;
}
/*
| b - c | < d < b + c
| b - d | < c < b + d
| c - d | < b < c + d


a, b, c - 
a, b, d -
a, c, d -
b, c, d -
*/