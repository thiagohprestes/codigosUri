#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 double nota1, nota2;
      
     scanf("%lf %lf", &nota1, &nota2);
      
     printf("%.5lf\n", ((nota1 * 3.5) + (nota2 * 7.5))/11);//calculando media ponderada das notas e imprimindo
   
     return 0;
}
