#include<iostream>

main(){
     char classe[12], classe2[9], classe3[11];
	
	 bool comparaString(char c[], char c2[]); /*definindo função de comparacao de strings*/
	 
	scanf("%s %s %s", &classe, &classe2, &classe3); /*recebendo strings de classes de animais*/ 

    if(comparaString("vertebrado", classe)){ /*verificando se a primeira string digitada eh igual a vertebrado*/
		 if(comparaString("ave", classe2)){  /*verificando se a segunda string digitada eh igual a ave*/
		     if(comparaString("carnivoro", classe3)) printf("aguia"); /*verificando se a terceira string digitada eh igual a carnivoro*/
		     else if(comparaString("onivoro", classe3)) printf("pomba");/*verificando se a terceira string digitada eh igual a onivoro*/
		}
		 
	   	 else if(comparaString("mamifero", classe2)){
			 if(comparaString("onivoro", classe3)) printf("homem");
		   	 else if(comparaString("herbivoro", classe3)) printf("vaca");
		}				
	}
	
    else if(comparaString("invertebrado", classe)){
		 if( comparaString("inseto", classe2)){
		     if(comparaString("hematofago", classe3)) printf("pulga");
		     else if(comparaString("herbivoro", classe3)) printf("lagarta");
		}
		
	    else if(comparaString("anelideo", classe2)){
		   	 if(comparaString("hematofago", classe3)) printf("sanguessuga");
		   	 else if(comparaString("onivoro", classe3)) printf("minhoca");
		}		
	}	
	printf("\n");/*Pula linha os fim dos condicionais*/
	
     return 0;
}

bool comparaString(char c[], char c2[]){/*recebe duas strings*/
       int i = 0; /*variável para incremento*/
       
       while(c[i] == c2[i] && c[i] != '\0' && c2[i] != '\0'){/*compara char por char entre duas strings*/
       	    ++i; /*incrementa i enquanto o char de mesma posicao no vetor das variaveis forem iguais*/
	   }
	   
	   if(c[i] == '\0' && c2[i] == '\0'){/*verifica se o ultimo char das duas strings eh igual ao caracter nulo*/
	   	    return 1;/*retorna 1 (verdadeiro no bool)*/
	   }else {
	  
	   return 0;/*retorna false*/
	   } 
}  
