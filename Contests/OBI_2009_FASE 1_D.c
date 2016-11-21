#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int n, p, q;
	char c;
	
	scanf("%d %d  %c %d", &n, &p, &c, &q);
	
	if(c == '*'){
      if((p * q) <= n) printf("OK\n");	
      else printf("OVERFLOW\n");  
	}
    else{
		if((p + q) <= n) printf("OK\n");
        else printf("OVERFLOW\n"); 		
	}
	
	return 0;
}
