#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
      short tCachorros, tCompet;

      scanf("%hd %hd" , &tCachorros, &tCompet);

      printf("%.2lf\n", (double)tCachorros/tCompet);
	 
	 return 0;
}