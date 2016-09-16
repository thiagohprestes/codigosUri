#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PI 3.14159 //definindo constante Pi

int main(){
	 double raio;

	 scanf("%lf", &raio);

	 printf("A=%.4lf\n", raio * raio * PI);//calculando área da circunferência e imprimindo

	 return 0;
}
