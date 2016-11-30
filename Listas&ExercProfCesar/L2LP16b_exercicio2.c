#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct {
	int cod; 
	char tel[16];
	char tipoTel[4];
} RegArqTel;

typedef struct {
	int cod; 
	char nome[21];
	char sexo;
	char estCivil;
} RegArqAluno;

int main(){
	RegArqTel telefone;
	RegArqAluno aluno;
	
	FILE *vArqTel, *vArqAluno;

	vArqTel = fopen("Telefones.dat", "r");
	if(vArqTel == NULL){	
		printf("ERRO AO ABRIR ARQUIVO Telefones.dat\n\n");
		return 1;
	}
	
	vArqAluno = fopen("Alunos.dat", "r");
	if(vArqAluno == NULL){	
		printf("ERRO AO ABRIR ARQUIVO Telefones.dat\n\n");
		return 1;
	}
	
	fread(&aluno, sizeof(RegArqAluno), 1,vArqAluno);
	
	while(!feof(vArqAluno)){
		printf( "Cod: %d    Nome: %s    Sexo: %c    Estado Civil: %c\n", aluno.cod, aluno.nome, aluno.sexo, aluno.estCivil);

	    fseek(vArqTel, 0, SEEK_SET);
		fread(&telefone, sizeof(RegArqTel), 1,vArqTel);
		
		while(!feof(vArqTel)){
			if(telefone.cod == aluno.cod)
				printf( "%s %s\n", telefone.tel, telefone.tipoTel);
			
			fread(&telefone, sizeof(RegArqTel), 1,vArqTel);
		}
		printf("\n");
		
		fread(&aluno, sizeof(RegArqAluno), 1,vArqAluno);
	}
	
	fclose(vArqTel);
	fclose(vArqAluno);
	
	return 0;
}
