#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PAR 1
#define IMPAR 0

int main(){
	 short j1, j2, p, r, a, res;
	
	 scanf("%hd %hd %hd %hd %hd", &p, &j1, &j2, &r, &a);
	 
	 r += a;
	 res = (j1+j2) % 2; 
	 if(!r){
		 if((p == PAR && res == 0) || (p == IMPAR && res != 0)) printf("Jogador 1 ganha!\n");
		 else printf("Jogador 2 ganha!\n");
	 } 
	 
	 else printf("Jogador %hd ganha!\n", r);	 
	
	 return 0;
}
