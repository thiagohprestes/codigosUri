#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define TRUE 1
int main(){
	int num, num2, j, total;
     
    while(TRUE){ 
    	total = 0;
	   scanf("%d %d", &num, &num2);

	   if(num <= 0 || num2<=0) break;
  
       if(num < num2){
           for(j = num; j <= num2; j++){
           	  printf("%d ", j);
              total += j;
           }
        } else if(num2 < num){
           for(j = num2; j <= num; j++){
           	  printf("%d ", j);
              total += j;
           }
        }else total = num;
       
       printf("Sum=%d\n", total);
       
    }

	return 0;
}