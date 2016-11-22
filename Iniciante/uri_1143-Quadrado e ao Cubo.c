#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

int main(){
	unsigned short int in, j;
	unsigned int i;

    #ifdef DEBUG
	    clock_t Ticks[2];
	    Ticks[0] = clock();
    #endif

	scanf("%hd", &in);

	for(i = 1; i <= in; i++){
            printf("%d %d %d\n", i, i*i, i*i*i);
            printf("%d %d %d\n", i, (i*i) + 1, (i*i*i) + 1);
	}

	#ifdef DEBUG
		Ticks[1] = clock();
	    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
	    printf("Tempo gasto: %g ms.", Tempo);
	#endif
	return 0;
}