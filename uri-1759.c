#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     int num;
     
     scanf("%d" , &num);

     while(num--){
     	if(num == 0) printf("Ho!\n");
     	else printf("Ho ");
     }

	 return 0;
}