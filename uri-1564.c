#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short reclamacao;
 
     while(scanf("%hd" , &reclamacao) != EOF){
         if(reclamacao > 0) printf("vai ter duas!\n");
         else printf("vai ter copa!\n");
     }

	 return 0;
}