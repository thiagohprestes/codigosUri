#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     char pisca[10], a = 3;
     short numero;

     while(a--){
     	 numero = 0;

	     while(1){
	         scanf("%s caw", pisca);

             if(!strcmp(pisca, "caw")) break;

	         if(pisca[0] == '*') numero += 4;
	      	 if(pisca[1] == '*') numero += 2;
	      	 if(pisca[2] == '*') numero += 1;

	     } 

	     printf("%hd\n", numero);
	 }

	 return 0;
}