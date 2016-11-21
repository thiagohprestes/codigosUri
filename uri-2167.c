#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//Treinando alocação dinâmica 

int main(){
     short n, i, resp;
     int *veloc;

     scanf("%hd" , &n);
     
     veloc = (int*) malloc(n*sizeof(int));

     for(i = 0; i < n; i++)
     	scanf("%d", &veloc[i]);
     
     for(i = resp = 0; i < n-1; i++)
     	if(veloc[i] > veloc[i+1]){
            resp = i+2;
     		break;
     	}    		

     printf("%hd\n", resp);

     free(veloc);

	 return 0;
}
