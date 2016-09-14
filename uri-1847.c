#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
int main(){
     short temp, temp2, temp3;
     char feliz;

     while(1){
     	feliz = FALSE;
     scanf("%hd %hd %hd" , &temp, &temp2, &temp3);
      
     if(temp == 0) break;

     if(temp2 == temp){//se eh igual do 1 para o dia 2
        if(temp2 < temp3) feliz = TRUE;
        else feliz = FALSE;
     }

     else if(temp > temp2){//caiu do 1 para o 2 dia
         if(temp2 - temp3 >= temp - temp2) feliz = FALSE;
         else feliz = TRUE;
          
     }else{//subiu do 1 para o 2 dia
     	if(temp3 - temp2 >= temp2 - temp) feliz = TRUE;
     	else feliz = FALSE;	

     }

     if(feliz)printf(":)\n");
     else printf(":(\n");
    }
    
	 return 0;
}

