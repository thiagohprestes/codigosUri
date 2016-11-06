#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short v, t;
      
     while(scanf("%hd %hd" , &v, &t) != EOF){ 
     	printf("%d\n", v*2*t);
     }
	 return 0;
}
