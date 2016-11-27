#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long long fib(int);

int main(){
     int n;

     printf("Digite um inteiro positivo: ");
     scanf("%d" , &n);
     
     printf("fib(%d) = %lld\n", n, fib(n)); 

	 return 0;
}

long long fib(int n){
	if(n == 1 || n == 2 || n == 0)
		return 1;
	else 
		return fib(n-1) + fib(n-2);
}