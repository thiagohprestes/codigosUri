#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     char frase[] = "LIFE IS NOT A PROB LEM TO BE SOVED";
     short i, j;

     scanf("%hd" , &i);

     for(j = 0; j < i; j++)printf("%c", frase[j]);

     printf("\n");
	 return 0;
}