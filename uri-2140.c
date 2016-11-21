#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    	int n, m;
        char possible, i;
        short troco[] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150, 4, 10, 20, 40, 100, 200};

    scanf("%d %d", &n, &m);
    
	while(n+m){
        possible  = 0;
               
		m -= n;

		for(i = 0; i < 21; i++)
			if(m == troco[i]){ possible = 1; break;} 	
                     

            if(possible) printf("possible\n");
            else printf("impossible\n");
           
           scanf("%d %d", &n, &m);
      }
      
      return 0;
}
