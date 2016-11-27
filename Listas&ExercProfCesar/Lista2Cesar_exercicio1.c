#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long long sigma(int);

int main(){
     int n;

     scanf("%d" , &n);

     printf("%lld\n", sigma(n));

	 return 0;
}

//Forma Recursiva da função Sigma
long long sigma(int n){
     if(n >= 0)
        return n + sigma(n-1);
     else
     	return 0;
}

//Forma sem recursão da função Sigma
long long sigma(int n){
     long long total = 0, i;
     if(n <= 0) return 0;

     else
     	for(i = n; i > 0; i--){
        	total += i;
     	}

     	return total;
}