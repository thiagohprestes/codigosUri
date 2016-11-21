#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Ponto{
	float x, y;
};

int main(){
	struct Ponto coord, coord2;
    float dist;
	
	while(1){
		scanf("%f %f %f %f", &coord.x, &coord.y, &coord2.x, &coord2.y);
		if(coord.x == 0 && coord.y == 0 && coord2.x == 0 && coord2.y == 0) break;
		
		dist = sqrt((coord2.x - coord.x)*(coord2.x - coord.x) + (coord2.y - coord.y)*(coord2.y - coord.y));
		printf("%.6f\n", dist);
	}
	
	return 0;
}