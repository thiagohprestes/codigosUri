#include <iostream>
 
using namespace std;
 
int main() {
	float salario, nSalario, reajuste, nReajuste;
	
	scanf("%f", &salario);
	
	if(salario >= 0.00 && salario <= 400.00) reajuste = 0.15;
	else if(salario >  400.00 && salario <= 800.00) reajuste = 0.12;
	else if(salario > 800.00 && salario <= 1200.00) reajuste = 0.1;
	else if(salario >= 1200.00 && salario <= 2000.00) reajuste = 0.07;
	else if(salario > 2000.00) reajuste = 0.04;
		
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", nSalario = salario * (reajuste + 1), nReajuste = salario * reajuste, reajuste*100);
    return 0;
}
