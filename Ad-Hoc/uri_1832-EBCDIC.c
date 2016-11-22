#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TAM_MAX 1000000
#define TRUE 1
#define FALSE 0
int main(){
     char palavra[TAM_MAX], octal[5], enter, encheuOctal = FALSE;
     int decimal, i, j;

     while(fgets(palavra, TAM_MAX, stdin) != NULL){
         i = 0;
         enter = FALSE;
         while(TRUE){
	         for(j = 0; palavra[i] != ' '; i++, j++){

	             if(palavra[i] == '\0' || palavra[i] == '\n' || palavra[i] == '\r'){enter = TRUE; break;}
	             octal[j] = palavra[i];
	             if(j == 2) {encheuOctal = TRUE; break;}
	         } i++;
             
             sscanf(octal, "%o", &decimal);

	         if(decimal > 128 && decimal < 138 || decimal == 64) decimal -= 32;
	         else if(decimal > 144 && decimal < 154) decimal -= 39;
	         else if(decimal > 161 && decimal < 170) decimal -= 47;
	         else if(decimal > 192 && decimal < 202) decimal -= 128;
	         else if(decimal > 208 && decimal < 218) decimal -= 135;
	         else if(decimal > 225 && decimal < 234) decimal -= 143;
	         else if(decimal > 239 && decimal < 250) decimal -= 192;

	         if(encheuOctal){printf("%c", decimal);encheuOctal = FALSE;}

	         if(enter){break;}
            
	     }
         printf("\n");  
     }

	 return 0;
}