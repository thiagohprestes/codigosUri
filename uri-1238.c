#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     short numCasos;
     char palavra[51], palavra2[51];
          
     void combinaString(char[], char[]);

     scanf("%hd" , &numCasos);

     while(numCasos--){
     	scanf("%s %s" , palavra, palavra2);

        combinaString(palavra, palavra2);//Combinando palavras
     }
	 return 0;
}

void combinaString(char palavra[], char palavra2[]){
    int maior, menor;
    short i = 0, j = 0 ,k = 0;
    char palavraNova[103];

    memset(palavraNova, '\0', 103);

    if(strlen(palavra) > strlen(palavra2) ){
    	 maior = strlen(palavra); 
    	 menor = strlen(palavra);
    } else { 
         maior = strlen(palavra2); 
    	 menor = strlen(palavra);
    }                               

    while(i <= maior + menor){
    	 if(palavra2[k] == '\0'){
	    		while(j < maior){
	                palavraNova[i] = palavra[j];
	                i++;
	                j++;
	    		} 
	    		break;
        }

        else if(palavra[j] == '\0'){
	         while(k < maior){
	             palavraNova[i] = palavra2[k];
	             i++; 
	             k++;
	         } 
	    	 break;
	    }

    	else if(i % 2 == 0){
    	 palavraNova[i] = palavra[j];
    	  j++;

    	} else {
    		palavraNova[i] = palavra2[k];
    		 k++;
    	}
   
    	i++;
    } 

    printf("%s\n", palavraNova);
}
