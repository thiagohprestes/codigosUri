#include<iostream>

/*Problema 1049 do Uri Online*/

main(){
     char classe[12], classe2[9], classe3[11];
	
	 bool comparaString(char c[], char c2[]);
	 
	scanf("%s %s %s", &classe, &classe2, &classe3); 

    if(comparaString("vertebrado", classe)){
		 if(comparaString("ave", classe2)){
		     if(comparaString("carnivoro", classe3)) printf("aguia");
		     else if(comparaString("onivoro", classe3)) printf("pomba");
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
	printf("\n");
	
     getchar(); 
     return 0;
}

bool comparaString(char c[], char c2[]){
       int i = 0;
       
       while(c[i] == c2[i] && c[i] != '\0' && c2[i] != '\0'){
       	    ++i;
	   }
	   
	   if(c[i] == '\0' && c2[i] == '\0'){
	   	    return 1;
	   }else {
	   return 0;
	   } 
}  
