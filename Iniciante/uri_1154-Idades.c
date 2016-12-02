#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 int i = 0, soma = 0, num = 0;
	 
     while(num >= 0){
         scanf("%d", &num);

         soma += num; 
         i++;
    }
     
    printf("%.2f\n", (float)soma/i);

    return 0;
}
