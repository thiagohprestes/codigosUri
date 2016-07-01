#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
    short int numCasos, i = 0;
    int num, num2;
    
    scanf("%hd", &numCasos);

    while(i < numCasos){
    	scanf("%d %d", &num, &num2);

    	if(num2 == 0) printf("divisao impossivel\n");
    	else printf("%.1f\n",(float)num/num2);
     i++; 
    }

	return 0;
}