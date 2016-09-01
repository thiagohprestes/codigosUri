#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	short numCasos;
     char nome[20];
	 int newton;
	 
	 scanf("%hd", &numCasos);
	 while(numCasos--){
		 scanf("%s", nome); scanf("%d", &newton);
		 
		 if(strcmp(nome, "Thor") == 0 && newton > 0) printf("Y\n");
		 else printf("N\n");
	 }
	 
	 return 0;
}
