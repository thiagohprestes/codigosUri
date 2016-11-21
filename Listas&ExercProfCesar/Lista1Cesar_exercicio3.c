#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Coordenadas{
	int x, y, x0, y0;
};

short pertenceACordenada(int, int, int, int, int, int); //retorna 0 caso n pertenca e 1 caso pertenca

int main(){
	int n;
	struct Coordenadas posic;
	int x, y;
	
	scanf("%d", &n); 
	
	while(n--){
		scanf("%d %d %d %d %d %d", &posic.x0, &posic.y0, &posic.x, &posic.y, &x, &y);
		
		if(pertenceACordenada(posic.x0, posic.y0, posic.x, posic.y, x, y))  printf("Contido\n");
		else printf("Nao-contido\n");
	}
	
}

short pertenceACordenada(int x0, int y0, int x1, int y1, int x, int y){
	if((x >= x0 && x <= x1) && (y >= y0 && y <= y1)) return 1;
		else return 0;
}