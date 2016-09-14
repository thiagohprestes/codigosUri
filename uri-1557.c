#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    short matriz, linha, coluna, i, formato;
	char a[10];

	while(1){
		scanf("%hd", &matriz);
		if(matriz == 0) break;
		
		formato = sprintf(a, "%d", (int)pow(4, matriz - 1)) + 1;

		for(linha = 0; linha < matriz; linha++){
			i = linha;
			for(coluna = 0; coluna < matriz; coluna++, i++){
				if(coluna == 0) printf("%*d", formato - 1, (int)pow(2, i));
				else printf("%*d", formato, (int)pow(2, i));
			}
			printf("\n");
		}
		printf("\n");
	}

   return 0;
}