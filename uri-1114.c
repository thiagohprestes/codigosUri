#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define senha_mestra 2002 /*define senha*/
int main(){

    int senha;/*variavel que armazena entrada de inteiro*/

    while(1){
    	scanf("%d", &senha);/*recebendo inteiro*/
    	if(senha == senha_mestra) break;/*testando se valor recebido eh igual senha preh-definida, caso true, sai do laco*/

    	printf("Senha Invalida\n");/*imprimindo senha ivalida*/
    }

    printf("Acesso Permitido\n"); /*imprimindo acesso permitido*/

	return 0;
}