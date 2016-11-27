#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long long somaTriangulo(int);
void imprimeTriangulo(int);

int main(){
     int n;
     
     scanf("%d" , &n);

     printf("O N-ésimo número triangular de %d eh %lld\n\n", n, somaTriangulo(n));
    
     imprimeTriangulo(n);

	 return 0;
}

long long somaTriangulo(int n){
    if(n == 1)
    	return 1;
    else 
    	return n + somaTriangulo(n-1);
}

void imprimeTriangulo(int n){
    int i;

    if(n != 0){
	    for(i = 1; i <= n ; i++){
	    	printf(".");
	    }
	    printf("\n");

	    imprimeTriangulo(n-1);
    }
}