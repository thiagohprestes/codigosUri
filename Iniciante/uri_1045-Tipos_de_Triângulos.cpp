#include <iostream>
 
using namespace std;
 
int main() {
	float a, b, c, A, B, C;
	
	scanf("%f %f %f", &a, &b, &c);
	
     if (a < b)                                          
         if (b < c) {A = c; B = b; C = a;}                                    
         else  if (a < c) {A = b; B = c; C = a;}
     else {A = b; B = a; C = c;} 

     else if (b < c)                                      
         if (a < c) {A = c; B = a; C = b;}
         else {A = a; B = c; C = b;}
     else {A = a; B = b; C = c;}
  
     if (A >= B+C) printf("NAO FORMA TRIANGULO\n");
     else if (A*A > (B*B) + (C*C)) printf("TRIANGULO OBTUSANGULO\n");
	 if (A*A == (B*B) + (C*C)) printf("TRIANGULO RETANGULO\n");
     if (A*A < (B*B) + (C*C)) printf("TRIANGULO ACUTANGULO\n");
     if(A == B && B == C) printf("TRIANGULO EQUILATERO\n");
     if (A == B)
          if (B != C) printf("TRIANGULO ISOSCELES\n");
     if (B == C) 
          if (A != B) printf("TRIANGULO ISOSCELES\n");
     if (A == C)
          if (B != A)  printf("TRIANGULO ISOSCELES\n");
    return 0;
}
