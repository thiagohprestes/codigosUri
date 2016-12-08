#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TAM_VETOR 50

typedef struct{
	int dia, mes, ano;
} Data;

typedef struct{
	int cod;
	Data data;
	char tipo;
	int codMed, codPac;
	float valor;
} RegArqAtends;

typedef struct{
	Data data;
	double totPart;
	double totConv;
	double total;
} RelatAtends;

char dateIsLarger(Data, Data);
char dateIsEqual(Data, Data);

int main(){
	int i, j;
	Data dataI, dataF;
	FILE *vArqAtends;
	RegArqAtends atendimento; 
	RelatAtends relatAtend[TAM_VETOR] = {0};
	double tFinalPart = 0,  tFinalConv = 0;
	long double tFinalTotal = 0; 
 	
	printf("Informe a data inicial do periodo: ");
	scanf("%d %*c %d %*c %d", &dataI.dia, &dataI.mes, &dataI.ano);
	
	printf("Informe a data final do periodo: ");
	scanf("%d %*c %d %*c %d", &dataF.dia, &dataF.mes, &dataF.ano);
	 
	vArqAtends = fopen("Atendimentos.dat", "r");
	if(vArqAtends == NULL){	
		printf("ERRO AO ABRIR ARQUIVO Atendimentos.dat\n\n");
		return 1;
	}
	
	i = 0;
	while(fread(&atendimento, sizeof(RegArqAtends), 1, vArqAtends)){
		while(dateIsLarger(atendimento.data, dataI) && dateIsLarger(dataF, atendimento.data) && !feof(vArqAtends)){
			 relatAtend[i].data = atendimento.data;	
			 
			 while(dateIsEqual(relatAtend[i].data, atendimento.data) && !feof(vArqAtends)){			
				if(atendimento.tipo == 'P') relatAtend[i].totPart += atendimento.valor;
				else relatAtend[i].totConv += atendimento.valor;
				
                		fread(&atendimento, sizeof(RegArqAtends), 1, vArqAtends);	
			 }
			 relatAtend[i].total =  relatAtend[i].totPart + relatAtend[i].totConv;
			 i++;			
		}		  
        }
	
	printf("\nData          Particular    Convenio     Total\n");
	for(j = 0; j < i; j++){
		printf("%02d/%02d/%04d    %8.2f    %8.2f    %8.2f\n", relatAtend[j].data, relatAtend[j].totPart,
                               		  relatAtend[j].totConv, relatAtend[j].total);	
        
		tFinalPart += relatAtend[j].totPart;
		tFinalConv += relatAtend[j].totConv;
        tFinalTotal += relatAtend[j].total;	
	}
	printf("\nTotais =>     %8.2lf    %8.2lf    %8.2Lf", tFinalPart, tFinalConv, tFinalTotal);
}

//Retorna verdadeiro se a primeira data for maior ou igual a segunda
char dateIsLarger(Data data1, Data data2){
	if(data1.ano < data2.ano) 
		return 0;
	else if(data1.ano == data2.ano)
		if(data1.mes < data2.mes)
			return 0;
		else if(data1.mes == data2.mes)
			if(data1.dia < data2.dia)
				return 0;
			else if(data1.dia == data2.dia) 
				return 1;
			else 
				return 1;
		else return 1;
	else return 1;
}

// Retorna verdadeiro se as duas datas forem iguais
char dateIsEqual(Data data1, Data data2){
	if(data1.ano == data2.ano && data1.mes == data2.mes && data1.dia == data2.dia)
		return 1;
	else 
		return 0;
}




