#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int num, num2, i, total = 0;

	scanf("%d", &num);
	scanf("%d", &num2);

   if(num < num2){
	    for(i = num; i <= num2; i++){
	         if(i % 13 != 0) total += i;/*verifica se i eh multiplo de 13*/
	         
	    }
   }
   else if(num2 < num){
	    for(i = num2; i <= num; i++){
	         if(i % 13 != 0) total += i;
	    }
	}
   else {
    	if(num % 13 != 0) total = num;
    	else total = 0;
   }

    printf("%d\n", total);

	return 0;
}
