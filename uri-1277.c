#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 1000000
#define TRUE 1
#define FALSE 0
int main() {
	 int numCasos, numEstudantes, i, j, k, l, presente, aulas, espaco, atestado;
	 char nomes[MAX], frequencia[MAX], nome[55], print;
	 
	 void limpaBuffer();
	 
	 scanf("%d", &numCasos);
     limpaBuffer();
	 
	 while(numCasos--){
		 
	     scanf("%d", &numEstudantes);
	     limpaBuffer();
			  
	     fgets(nomes, MAX, stdin);

		 fgets(frequencia, MAX, stdin);
		 
		  i = 0; j = 0; espaco = 0; print = FALSE;
		  
		while(numEstudantes--){
			 for(aulas = 0, presente = 0, atestado = TRUE; frequencia[i] != ' ' && frequencia[i] != '\n' && frequencia[i] != '\r' && 
			 	frequencia[i] != '\0'; i++){
				 if(frequencia[i] == 'A'){aulas++; atestado = FALSE;}
				 else if(frequencia[i] == 'P'){ presente++;	aulas++;
				 	atestado = FALSE;}
		    } i++;

			 for(k = 0; nomes[j] != ' ' && nomes[j] != '\n' && nomes[j] != '\r'; j++, k++){
				 nome[k] = nomes[j];
	   		 } j++;

			if(((float)presente/aulas < 0.75) && !atestado){
				 if(print) printf(" ");
                  printf("%s", nome);
                  print = TRUE;
	        }

			for(l = 0; l <= 55; l++) nome[l] = 0;
				 
	    }
	  	 if(!(numCasos == 1 && numEstudantes == 1))printf("\n");
	}
	 
     return 0;
}

void limpaBuffer(){
while(getchar()!='\n');
return;
}