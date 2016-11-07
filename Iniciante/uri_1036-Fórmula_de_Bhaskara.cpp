#include <iostream>
#include <math.h> 

 
int main() {
	double a, b, c, delta;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	delta = (b * b) - 4 * a * c;//calcula delta
	
	if(a == 0 || delta < 0)//se a eh 0 e delta eh negativo calculo eh impossivel
	   printf("Impossivel calcular\n");
	
	else{
	  printf("R1 = %.5lf\n", ((-b) + sqrt(delta)) / (2 * a) );//calculando R1 pela formula de Bhaskara e imprimindo
	  printf("R2 = %.5lf\n", ((-b) - sqrt(delta)) / (2 * a) );//calculando R2 pela formula de Bhaskara e imprimindo
        }

    return 0;
}
