#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 double valor, valorNovo;
     
     scanf("%lf %lf", &valor, &valorNovo);
     
     printf("%.2lf%%\n", (((valorNovo * 100)/valor) - 100));
     /*Calcula a porcentagem de valor de aumento do ingresso, ou o desconto*/
	 return 0;
}