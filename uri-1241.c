#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     char num[1001], num2[1001];
     short numCasos, compara, encaixa;
     int i;

     scanf("%hd" , &numCasos);

     while(numCasos--){
         scanf("%s %s" , num, num2);
         compara = strlen(num) - strlen(num2);

         for(i = 0, encaixa = 1 ; i < strlen(num2); i++, compara++){
             if(num[compara] != num2[i]){
                 encaixa = 0;
                 break;
             }
         }
             if(encaixa) printf("encaixa\n");
             else printf("nao encaixa\n");  
     }
          
       	 

	 return 0;
}