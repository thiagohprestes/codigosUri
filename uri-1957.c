#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (){ 
	 unsigned long int num;
     char hexa[9];
     
     scanf("%lu", &num);

     sprintf(hexa,"%lX", num);

     printf("%s\n", hexa);
	 
	 return 0; 
} 