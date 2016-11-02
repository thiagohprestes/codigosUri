#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     char texto[500];

     scanf("%[^\n\r]", texto);

     if(strlen(texto) < 81)
     	printf("YES\n");
     else
     	printf("NO\n");

	 return 0;
}
