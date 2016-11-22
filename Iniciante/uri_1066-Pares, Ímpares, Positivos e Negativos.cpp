#include <iostream>
 
using namespace std;
 
int main() {
 	int a[5];
	int i = 0;
	int tPares = 0, tImpares = 0, tPositivos= 0, tNegativos= 0;	

	while(i < 5){
		scanf("%d", &a[i]);
		
		if(a[i] % 2 == 0){
           tPares++;
		}
	    if(a[i] % 2 != 0){
			tImpares++;
		} 
		if (a[i] > 0){
			tPositivos++;
		} else if (a[i] < 0){
			tNegativos++;
		}
		i++;
	}

	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", tPares, tImpares, tPositivos, tNegativos);
	
    return 0;
}