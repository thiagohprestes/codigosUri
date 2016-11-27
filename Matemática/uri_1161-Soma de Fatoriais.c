#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long long fatorial(short);

int main(){
     short m, n;

     while(scanf("%hd %hd" , &m, &n) != EOF){
     printf("%lld\n", fatorial(m)+ fatorial(n));
     }
	 return 0;
}

long long fatorial(short n){
	 if (!n)
	 	return 1;               
     else 
     	return fatorial(n-1)*n;
}
