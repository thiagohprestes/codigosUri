#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     long n, l;
     long long unsigned result;

     scanf("%ld %ld" , &n, &l);
     result = n * l;
     printf("%llu\n", result);

	 return 0;
}