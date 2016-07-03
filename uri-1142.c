#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

int main(){
    unsigned int in, i = 1;

    #ifdef DEBUG
        double tInicio_=clock() ;
    #endif

    scanf("%hd", &in);

    in *= 4;

    while(i <= in){
         printf("%hd %hd %hd PUM\n", i, i + 1, i + 2);
         i+=4;
    } 

    #ifdef DEBUG
        printf( "Tempo: %.1lf\n", clock() - tInicio_) ;
    #endif
        

	return 0;
}