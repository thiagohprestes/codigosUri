#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short numCasos, caminhou, i;
     char palavra[51], letra;

     scanf("%hd" , &numCasos);

     while(numCasos--){
         memset(palavra, '\0', 51);
         scanf("%s", palavra);
         scanf("%hd" , &caminhou);
        
         for(i = 0; i < strlen(palavra); i++){
         	if(palavra[i] - caminhou < 'A'){
         	     letra = '[' - (caminhou - (palavra[i] - 'A'));
         	     printf("%c", letra);
         	}

            else if(palavra[i] != '\n') printf("%c", palavra[i] - caminhou);
         }
           printf("\n");
     }

	 return 0;
}
