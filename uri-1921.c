#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     long long lados;
     scanf("%lld" , &lados);

     printf("%lld\n", (lados*(lados-3))/2);
	 return 0;
}