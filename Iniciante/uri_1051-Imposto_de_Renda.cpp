#include <iostream>
 
using namespace std;
 
int main() {
	float renda, imposto;

	scanf("%f", &renda);
    
    if(renda < 2000){
      imposto = 0;
    }
    else if(renda < 3000) {
        imposto = (renda-2000)*0.08;
    }
    else if(renda < 4500){
    	imposto = ((renda-3000)*0.18) + 80;
    } 
    else imposto = ((renda-4500)*0.28) + 80 + 270;

    if(imposto == 0.00) printf("Isento\n");
    else printf("R$ %.2f\n", imposto);
    
    return 0;
}