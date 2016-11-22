#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

int main(){
	unsigned short int x, j = 1;
	unsigned int i, y;

    #ifdef DEBUG
	    clock_t Ticks[2];
	    Ticks[0] = clock();
    #endif

	scanf("%hd %d", &x, &y);

    for(i = 1; i <= y; i++){
    	 if (j == x){ 
    	 	printf("%d\n", i); 
    	 	j = 0;
    	 }
	     else if (j < x) printf("%d ", i);

         j++;  

    }

	#ifdef DEBUG
		Ticks[1] = clock();
	    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
	    printf("\nTempo gasto: %g ms.\n", Tempo);
	#endif

	return 0;
}