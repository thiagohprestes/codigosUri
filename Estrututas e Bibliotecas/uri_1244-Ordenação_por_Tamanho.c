#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void inserctionSort(char [][50], int);

int main(){
     int n, i, j, k;
     
     char linha[2503], palavra[50][50]; 

     scanf("%d\n" , &n);

     while(n--){
     	 fgets(linha, 2503, stdin);

         for(i = 0; linha[i] >= ' '; i++);
         linha[i] = '\0';

        for(i = j = k = 0; linha[j] != '\0'; j++, k++){
             if(linha[j] != ' ')
             	palavra[i][k] = linha[j];

             else{ 
             	  palavra[i][k] = '\0'; 
                  i++; k = -1;
             }
        } 
        palavra[i][k] = '\0';
      
         inserctionSort(palavra, i+1);

        printf("%s", palavra[0]);

        for(j = 1; j <= i; j++){
        	printf(" %s", palavra[j]);
        }
        printf("\n");
     }

	 return 0;
}

void inserctionSort(char vetor[][50], int n){
	int pivo = 1, i;
	char aux[50];
       
	while(pivo < n){
		strcpy(aux, vetor[pivo]);
		i = pivo - 1;
		
		while(strlen(vetor[i]) < strlen(aux)){
			strcpy(vetor[i+1], vetor[i]);
			i--;
			if(i < 0) break;
		}
		strcpy(vetor[i+1], aux);
		pivo++;
	}
}