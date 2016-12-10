#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
	char nome[50]; 
	char escolha[4];
} Candidato;

int compara(const void *, const void *);

int main(){
    Candidato candidato[10000];
    char esc[50];
    int i, j, escolhido;

    for(i = 0; scanf("%s %s", candidato[i].nome, candidato[i].escolha) &&
    	strcmp(candidato[i].nome, "FIM") != 0; i++)
	
    for(j  = escolhido = 0; j < i; j++){
        if(!strcmp(candidato[escolhido].escolha, "YES")){	
    	     if(!strcmp(candidato[j+1].escolha, "YES") && strlen(candidato[escolhido].nome) < strlen(candidato[j+1].nome))
    		escolhido = j+1;
    	}else{ 
    	    escolhido++;
    	    j++;
    	}
    }
    strcpy(esc, candidato[escolhido].nome);

    qsort(candidato, i, sizeof(Candidato), compara);
    
    printf("%s\n",candidato[0].nome);

    for(j = 1; j < i; j++)
    	if(strcmp(candidato[j].nome, candidato[j-1].nome))
    	     printf("%s\n",candidato[j].nome);

    printf("\nAmigo do Habay:\n%s\n", esc);
	
    return 0;
}

int compara(const void *p1, const void *p2){
	Candidato *i = (Candidato *) p1, *j = (Candidato *) p2;
    
    if(strcmp(j->escolha, i->escolha) == 0)
        return strcmp(i->nome, j->nome);
    else 
    	return strcmp(j->escolha, i->escolha);
}
