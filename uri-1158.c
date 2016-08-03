#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int numCasos, a, b, i = 0, j, k, total = 0;

    scanf("%d", &numCasos);
	
	while(i < numCasos){
         scanf("%d %d", &a, &b);
         
         if(a % 2 == 0) 
	          for(j = a+1, k = 0; k < b; j+=2, k++){
	                 total += j;
	         }
         
         else 
	          for(j = a, k = 0; k < b; j+=2, k++){
	                 total += j;
	          }

         printf("%d\n", total);
      
     total = 0;
     i++;
	}

	return 0;
}