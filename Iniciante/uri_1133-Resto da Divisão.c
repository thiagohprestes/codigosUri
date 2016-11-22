#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    short int num,num2, i;

    scanf("%hd", &num);
    scanf("%hd", &num2);

       if(num < num2){
	    for(i = num+1; i < num2; i++){
	         if(i % 5 == 2 || i % 5 == 3) printf("%hd\n", i);/*verifica se resto da divisao de i por 5 eh 2 ou 3*/
	         
	    }
   }
   else if(num2 < num){
	    for(i = num2+1; i < num; i++){
	         if(i % 5 == 2 || i % 5 == 3) printf("%hd\n", i);
	    }
	}

	return 0;
}