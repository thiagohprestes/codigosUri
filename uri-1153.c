#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int num;
     
    int fatorial(int);

    scanf("%d", &num);

    printf("%d\n", fatorial(num));
	
	return 0;
}
int fatorial(int num){
      int i, total = 1;

      for(i = num; i >= 1; i--){
            total *= i;
      }

      return total;
}