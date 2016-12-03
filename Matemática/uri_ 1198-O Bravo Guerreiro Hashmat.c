#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MIN(n, m) ((n)<(m) ?  (n) : (m))
#define MAX(n, m) ((n)>(m) ?  (n) : (m))

int main(){
    long long hashmat, oponente;

	while(scanf("%lld %lld" , &hashmat, &oponente) != EOF){
	    printf("%lld\n", MAX(hashmat, oponente) - MIN(hashmat, oponente));
	}    

	return 0;
}
