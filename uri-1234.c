#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     char frase[51];
     short i, j;

       while(fgets(frase, 51, stdin)!= NULL){
    
    	 //if(frase[0] == '\n') break;

         for(i = 0, j = 0; i < strlen(frase); i++, j++){
         	 if(frase[i] == '\n') {
         	 	 break;
         	 }
             if(frase[i] == ' '){ printf(" "); j++;}  

             else if(j % 2 == 0){
                 if(frase[i] >= 'a' && frase[i] <= 'z')
                     printf("%c", frase[i] - 32);
             	 else printf("%c", frase[i]);
             }   
             else if(frase[i] >= 'A' && frase[i] <= 'Z')
                 printf("%c", frase[i] + 32);

             else printf("%c", frase[i]);
             
         }
         printf("\n");  
     }
     
     return 0;
}