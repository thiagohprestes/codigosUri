#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int in;
    short i;

   scanf("%d", &in);
   
   while(in){

         printf("1");

	     for(i = 2; i <= in; i++)        
             printf(" %d", i);
	   
	     printf("\n");
        
        scanf("%d", &in);
   }
	return 0;
}