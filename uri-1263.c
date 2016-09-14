#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
int main(){
     char palavras[5003], compara, trocou;
     short i, j;

     while(fgets(palavras, 5003, stdin)!= NULL){
         
         compara = tolower(palavras[0]);
         trocou = FALSE;   

         for(i = 1, j = 0; i < strlen(palavras); i++){
         	 palavras[i] = tolower(palavras[i]);
        
             if(palavras[i - 1] == ' '){

                 if(palavras[i] != compara){
                     compara = palavras[i];
                      trocou = FALSE;
         	 	 }

         	 	 else if(!trocou){       
         	 	     j++;
         	 	     trocou = TRUE;
         	 	 }
         	 }        	
         }
         
         printf("%hd\n", j);
         
     }
         
	 return 0;
}