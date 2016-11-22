#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
	int num, num2;

	while(1){/*while sem condicao de parada*/
       scanf("%d %d", &num, &num2);

       if(num == 0 || num2 == 0) break;/*se pelo menos um dos num recebidos forem igual a zero, sai do laco*/

       if(num > 0 && num2 > 0) printf("primeiro\n");
       else if(num < 0 && num2 > 0) printf("segundo\n");
       else if(num < 0 && num2 < 0) printf("terceiro\n");
       else printf("quarto\n");
	}

	return 0;
}