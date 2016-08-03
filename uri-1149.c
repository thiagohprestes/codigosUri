#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int inicio, qtdeVal, i, total = 0;

	scanf("%d %d", &inicio, &qtdeVal);

    while(1){
		 if(qtdeVal <= 0) scanf("%d", &qtdeVal);
		 else break;
    }

    qtdeVal += inicio;
    for(i = inicio; i < qtdeVal; i++){
         total += i;
    }
     
    printf("%d\n", total);
	return 0;
}