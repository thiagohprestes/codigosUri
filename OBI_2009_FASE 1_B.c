#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     unsigned int n, i; 
     int bacterias, dias, resp;
     long double maior = 0., colonia;

     scanf("%u", &n);

     for(i = 0; i < n; i++){
         scanf("%d %d", &bacterias, &dias);
         colonia = dias*log(bacterias);
         if(colonia > maior){
     		maior = colonia;
            resp = i;
     	 }
     }

     printf("%d\n", resp);

	 return 0;
}
