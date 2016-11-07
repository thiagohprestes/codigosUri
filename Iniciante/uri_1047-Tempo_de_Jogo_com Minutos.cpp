#include <iostream>
 
using namespace std;
 
int main() {
	int inicio, fim, inicioM, fimM, duracao, duracaoM;
 	
	scanf("%i %i %i %i", &inicio, &inicioM, &fim, &fimM);
	

	if(inicio < fim && inicioM == fimM){duracao = (fim - inicio); duracaoM = 0;}
	else if(inicio > fim && inicioM == fimM){duracao = (24 - inicio) + fim; duracaoM = 0;}
	else if(inicio == fim && inicioM < fimM){duracao = 0; duracaoM = fimM - inicioM;}
	else if(inicio == fim && inicioM > fimM){duracao = 23; duracaoM = 60 - inicioM + fimM;}
        else if(inicio > fim && inicioM > fimM){duracao = (23 - inicio) + fim; duracaoM = 60 - inicioM + fimM;}
        else if(inicio > fim && inicioM < fimM){duracao = (24 - inicio) + fim; duracaoM = fimM - inicioM;}
	else if(inicio < fim && inicioM > fimM){duracao = fim - inicio - 1; duracaoM = 60 - inicioM + fimM;}
	else if(inicio < fim && inicioM < fimM){duracao = fim - inicio; duracaoM = fimM - inicioM;}
	else if(inicio == fim && inicioM == fimM) {duracao = 24; duracaoM = 0;}
	else duracao =  duracaoM = (inicioM - fimM); 
			
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", duracao, duracaoM);
    return 0;
}
