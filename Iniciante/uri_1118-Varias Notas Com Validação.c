#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
     float nota, nota2, media;
     short int resp;
   
   while(1){
    media = 0;
      while(1){
         scanf("%f", &nota);
         if(nota >= 0.0 && nota <= 10.0){ 
           media = nota;
            break;
         }
         else printf("nota invalida\n");
       }
       while(1){
         scanf("%f", &nota2);
         if(nota2 >= 0.0 && nota2 <= 10.0){ 
           media += nota2;
            break;
         }
         else printf("nota invalida\n");
      }

         printf("media = %.2f\n", ((float)media)/2);

      while(1){
        
         printf("novo calculo (1-sim 2-nao)\n");
         scanf("%hd", &resp);

         if(resp == 1 || resp == 2) break;
      }
       
       if(resp == 2) break;
   }

      

	return 0;
}