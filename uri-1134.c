#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	short int i, resp = 0, alc = 0, gas = 0, die = 0;

	while(1){
        while(1){
	        scanf("%hd", &resp);
	        if(resp > 0 && resp <= 4) break;
        }
         if(resp == 4)break;

         else if(resp == 1) alc++;
         else if(resp == 2) gas++;
         else die++;
	}

	printf("MUITO OBRIGADO\nAlcool: %hd\nGasolina: %hd\nDiesel: %hd\n", alc, gas, die);

	return 0;
}