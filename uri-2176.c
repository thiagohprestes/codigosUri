#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 char mensagem[101];
     short i, len, totalBits;
	 scanf("%s", mensagem);

     len = strlen(mensagem);
      
	 for (i = totalBits = 0; i < len; i++){
	 	 totalBits+= mensagem[i]; 
	 }

     if(totalBits % 2 == 0) printf("%s0\n", mensagem);
     else printf("%s1\n", mensagem);

	 return 0;
}
