#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Aluno{
	int matricula;
  	float nota; 
};

int main(){
	short numAlunos, i = 0, resp;
	float maior = 0.;
	
	scanf("%hd", &numAlunos);
	
	struct Aluno aluno[numAlunos];
	
	while(i < numAlunos){
		scanf("%d %f", &aluno[i].matricula, &aluno[i].nota);
		if(aluno[i].nota > maior){
			maior = aluno[i].nota;
			resp = i;
		}	
        
        i++;		
	}
	
	if(aluno[resp].nota >= 8) printf("%d\n", aluno[resp].matricula);
	else printf("Minimum note not reached\n");
	
	return 0;
}
