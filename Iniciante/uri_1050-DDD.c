#include <iostream>
 
using namespace std;
 
int main() {
	int numDdd, i, c = 0, d = 0;
	int ddd[]{61, 71, 11, 21, 32, 19, 27, 31};
	char cidade[][35]{"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria",
	                   "Belo Horizonte"};
	
	scanf("%d", &numDdd);   
	
	while(d < 9){
		if(numDdd == ddd[d])
			c++;

		d++;
	}
	
	if(c == 0) printf("DDD nao cadastrado\n");
	
	else{
		
	while(true){
		if (numDdd == ddd[i] ) break;
		else i++;
	}   
	
	printf("%s\n", cidade[i]);
	}
    return 0;
}