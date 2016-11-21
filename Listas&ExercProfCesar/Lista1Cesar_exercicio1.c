#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct Data{
	 short dia, mes;
	 int ano;
};

void imprimeDia(short);
int diaDaSemana(short, short, int);
	
int main(){
	struct Data data;
	
	while(1){
		scanf("%hd %hd %d", &data.dia, &data.mes, &data.ano);
		
		if(data.dia == 0 && data.mes == 0 && data.ano == 0) break;
		
		printf("%.02hd/%.02hd/%.04d: ", data.dia, data.mes, data.ano);
		
		imprimeDia(diaDaSemana(data.dia, data.mes, data.ano));
	}
	
	return 0;
}

void imprimeDia(short diaDaSemana){
	
	switch (diaDaSemana){
		case 0: printf("Domingo\n"); break;
		case 1: printf("Segunda-Feira\n"); break;
		case 2: printf("Terca-Feira\n"); break;
		case 3: printf("Quarta-Feira\n"); break;
		case 4: printf("Quinta-Feira\n"); break;
		case 5: printf("Sexta-Feira\n"); break;
		case 6: printf("Sabado\n"); break;
	}
}

int diaDaSemana(short dia, short mes, int ano){
	mes -= 2;
    if(mes <= 0){mes += 12; ano--;}
	
	int iniAno = ano/100;
	int fimAno = ano % 100;
	int trunca = (int)(2.6 * mes - 0.1);
	double quoIni = iniAno/4;
	double quoFim = fimAno/4;
	
	int diaSemana =  (int)(trunca + dia + fimAno + quoFim + quoIni - 2 * iniAno) % 7;
	
	if(diaSemana < 0) diaSemana += 7;
	
	return diaSemana;
}
