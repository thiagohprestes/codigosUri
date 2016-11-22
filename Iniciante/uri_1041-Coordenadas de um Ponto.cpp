#include <iostream>
 
using namespace std;
 
int main() {
	float x, y;
	
	scanf("%f %f", &x, &y);
    
    //verifica onde esta o ponto no plano cartesiano
    if(x == 0 && y == 0) {printf("Origem\n");}
    
    else if(x == 0 && y != 0){printf("Eixo Y\n");}
    
    else if(x != 0 && y == 0){printf("Eixo X\n");}
    
    else if(x > 0 && y > 0){printf("Q1\n");} 
    
    else if(x < 0 && y > 0){printf("Q2\n");}
   
    else if(x < 0 && y < 0){printf("Q3\n");} 
    
    else if(x > 0 && y < 0){printf("Q4\n");}
  
  return 0;
}
