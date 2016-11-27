#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int fib(short);

int total;

int main(){
     short n, fibonacci;

     scanf("%hd", &n);

     while(n--){
       total = 0;

       scanf("%hd" , &fibonacci);

       printf("fib(%hd) = %d calls = %d\n", fibonacci, total-1, fib(fibonacci));
     } 	

	 return 0;
}

int fib(short fibonacci){
	total++;

    if(fibonacci == 0) 
    	return 0;
    else if(fibonacci == 1)
    	return 1;
    else
        return fib(fibonacci-1) + fib(fibonacci-2);
}