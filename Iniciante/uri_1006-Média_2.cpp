#include <iostream>
 
int main() {
 
   double a, b, c, MEDIA;
   
   scanf("%lf %lf %lf", &a, &b, &c);

   MEDIA = ((a * 2) + (b * 3) + (c * 5))/10;//calculando media ponderada
   
   printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
