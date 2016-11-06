#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int dias(float);

int main(){
     short n;
     float c;
      
     scanf("%hd" , &n); 

     while(n--){
        scanf("%f" , &c);
     	printf("%d dias\n", dias(c));
     }
	 return 0;
}

int dias(float comida){
	int tDias;
     while(comida > 1.){
     	comida /= 2;
     	tDias++;
     }
     return tDias;
}
