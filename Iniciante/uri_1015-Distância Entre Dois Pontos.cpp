#include <iostream>
#include <math.h>

int main() {
	
  float x1, x2, y1, y2;
   
   scanf("%f %f", &x1, &y1);
   scanf("%f %f",&x2, &y2);
   
  
   printf("%.4f\n", sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))) );//calculando distancia entre dois pontos no plano e imprimindo
   
 
    return 0;
}
