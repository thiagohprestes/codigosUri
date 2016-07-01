#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
	int num, num2;

	while(1){
         scanf("%d %d", &num, &num2);

         if(num == num2) break;

         if(num > num2) printf("Decrescente\n");
         else printf("Crescente\n");         
	}

	return 0;
}
