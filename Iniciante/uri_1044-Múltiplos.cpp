#include <iostream>
 
using namespace std;
 
int main() {
	int a, b, i = 1;
	bool teste = false;
	
	scanf("%d %d", &a, &b);
		
	if(a >= b){
    	while(teste != true && i <= a){
	    	if(b * i == a) teste = true;
	    	i++;
    	}
	}else{
		while(teste != true && i <= b){
	    	if(a * i == b) teste = true;
	    	i++;
    	}
	}
	
	if(teste) printf("Sao Multiplos\n");
	else printf("Nao sao Multiplos\n");

    return 0;
}
