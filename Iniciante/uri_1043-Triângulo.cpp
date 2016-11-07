#include <iostream>
 
using namespace std;
 
int main() {
 	float a, b, c, p, area;
	
	scanf("%f %f %f", &a, &b, &c);
	
	if(a < b+c && b < a+c && c < a+b) printf("Perimetro = %.1f\n", p = a + b + c);
	
	else printf("Area = %.1f\n", area = (c * (a + b)) / 2);

    return 0;
}
