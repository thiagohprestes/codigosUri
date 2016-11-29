#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TAM_VETOR 5

struct Aluno{
	char ra[14];
	char nome[41];
	float notaFinal;
	int faltas;
};

void imprimirDados(struct Aluno *);
int compara( const void *, const void *);

int main(){
	int i;
	struct Aluno alunos[TAM_VETOR];
	
	for(i = 0; i < TAM_VETOR; i++){
		scanf("%s %[^\n\r] %f %d", &alunos[i].ra, &alunos[i].nome, &alunos[i].notaFinal, &alunos[i].faltas);
	}
	
	//Imprimindo dados dos alunos na ordem de entrada
	printf("\n\nDADOS DOS ALUNOS ORDENADO CONFORME ORDEM DE ENTRADA\n\n");
	imprimirDados(alunos);
	
	qsort(alunos, TAM_VETOR, sizeof(struct Aluno), compara);
	
	//Imprimindo alunos ordenados descendentemente por nota em ordem alfabética
	printf("\n\nDADOS DOS ALUNOS ORDENADO CONFORME CRITERIOS\n\n");
	imprimirDados(alunos);
	
	return 0;
}

void imprimirDados(struct Aluno *alunos){
	int i;
	for(i = 0; i < TAM_VETOR; i++){
		printf("RA: %s // NOME: %s // NOTA FINAL: %.1f // FALTAS: %d\n\n", alunos[i].ra, alunos[i].nome, alunos[i].notaFinal, alunos[i].faltas);
	}
}

int compara( const void *p1, const void *p2 ){
	struct Aluno *i = (struct Aluno *)p1, *j = (struct Aluno *)p2;
	if(i->notaFinal < j->notaFinal)
		return 1;
	else if(i->notaFinal > j->notaFinal)
		return -1;
	else
		return strcmp(i->nome, j->nome);
}
