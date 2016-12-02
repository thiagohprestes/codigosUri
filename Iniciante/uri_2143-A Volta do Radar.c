#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short n;
     int qtdePessoas;

     while(scanf("%hd" , &n) && n != 0){
	     while(n--){
	     	scanf("%d" , &qtdePessoas);
	     	if(qtdePessoas % 2 == 0)
	     		printf("%d\n", ((qtdePessoas - 2) * 2 )+ 2);
	     	else
	     		printf("%d\n", ((qtdePessoas - 1) * 2 )+ 1);
	     }
     }

	 return 0;
}
