#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short int t1, t2, t3, t4;
     
     scanf("%hd %hd %hd %hd", &t1, &t2, &t3, &t4);

     printf("%hd\n", (t1 + t2 + t3 + t4) - 3);  

	 return 0;
}