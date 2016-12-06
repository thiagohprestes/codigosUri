#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int x;
	
	while(scanf("%d", &x) && x){
		printf("f91(%d) = %d\n", x, f91(x));
	}
	
	return 0;
}

int f91(n){
	if(n <= 100) 
		return f91(f91(n + 11));
	else 
		return n - 10;
}
