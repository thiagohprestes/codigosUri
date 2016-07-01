#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){

 short int numCasos, i = 0;
 int num, num2, j, total;

 scanf("%hd", &numCasos);

 while(i < numCasos){
   
    total = 0;

    scanf("%d %d", &num, &num2);

    if(num < num2){
      for(j = num+1; j < num2; j++){
         if(j % 2 != 0) total += j;
      }
    }
    else if(num2 < num){
      for(j = num2+1; j < num; j++){
         if(j % 2 != 0) total += j;
      }
    }else total = 0;

     printf("%d\n", total);

 i++;
 }

 return 0;
}
