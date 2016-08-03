#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int in;
    short int i;
   while(1){
	     scanf("%d", &in);
	     if(in == 0) break;

	     for(i = 1; i <= in; i++){
              if(i == in) printf("%d", i);
              else printf("%d ", i);
	     }
	     printf("\n");
   
   }
	return 0;
}