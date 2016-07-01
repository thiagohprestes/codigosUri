#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define senha_mestra 2002
int main(){

    int senha;

    while(1){
    	scanf("%d", &senha);
    	if(senha == senha_mestra) break;

    	printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");

	return 0;
}