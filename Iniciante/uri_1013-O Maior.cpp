#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
   int a, b, c, maior;
   
   scanf("%i %i %i", &a, &b, &c);

   maior = (a + b + abs(a - b))/2;//definindo qual o maior entre a e b
   
   printf("%i eh o maior\n",(maior + c + abs(maior - c))/2);//definindo maior entre c e maior anterior
   
    return 0;
}
