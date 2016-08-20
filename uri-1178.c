#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     double x, n[100];
     short int i = 1;

     scanf("%lf", &x);
     
     n[0] = x;

     printf("N[0] = %.4lf\n", x);

     while(i < 100){
         n[i] = n[i-1]/2;
         
         printf("N[%hd] = %.4lf\n", i, n[i]);
         i++;  

     }

	 return 0;
}