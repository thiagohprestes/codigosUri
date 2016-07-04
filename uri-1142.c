#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

int main(){
    unsigned int in, i;

    #ifdef DEBUG
        double tInicio =clock() ;
    #endif

    scanf("%d", &in);
    
    in *= 4;

    for( i = 1; i <= in; i++ ) printf( i & 3 ? "%d " : "PUM\n", i );
    return 0;

    #ifdef DEBUG
        printf( "Tempo: %.1lf\n", clock() - tInicio) ;
    #endif
        

	return 0;
}