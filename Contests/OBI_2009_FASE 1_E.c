#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     int matriz[510][510] = {0}, n, x, y, i;
     short resp = 0;

     scanf("%d", &n);

     for(i = 0; i < n; i++){
     	 scanf("%d %d", &x, &y);
     	 if(matriz[x][y] == 0) matriz[x][y] = 1;
     	 else {resp = 1; break;}  	 
     }
     
      printf("%hd\n", resp);

	 return 0;
}
