#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 int i = 0, soma = 0, num;
	 
	 while(1){
         scanf("%d", &num);

         if(num < 0) break;

         soma += num; 
         i++;
	 }
     
     printf("%.2f\n", (float)soma/i);

	 return 0;
}