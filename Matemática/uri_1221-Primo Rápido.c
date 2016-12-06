#include <stdio.h>
#include <math.h>

int main(void) {
	int n, num, i, j, notPrime, raiz;
	
	scanf("%d", &n);
	
	while(n--){
	    scanf("%d", &num);
		
		raiz = sqrt(num);
		for(i = 2, notPrime = 0; i <= raiz; i ++)
			if(num % i == 0){ notPrime = 1; break; }
	        
		if(notPrime || num == 1)
			printf("Not Prime\n");
		else
			printf("Prime\n");
		
	}
	return 0;
}
