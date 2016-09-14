#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     int impar[5], par[5], num, i = 0 , j = 0, k = 15, l = 0;

     while(k--){
     	 scanf("%d" , &num);
     	 
     	 if(num % 2 == 0){
     	     par[i] = num;
     	     i++;

     	     if(i == 5){
     	     	 i = 0;
     	 	     while(i < 5){ 
     	 	         printf("par[%d] = %d\n", i,par[i]);
     	 	         i++;
     	 	     }
     	 	     i = 0; 
     	     }    
     	 } 
     	 else{
     	     impar[j] = num;
             j++;

             if(j == 5){
                 j = 0;
     	         while(j < 5){
	     	     	 printf("impar[%d] = %d\n", j,impar[j]);
	     	     	 j++;
     	     	}
     	     	j = 0;
     	     } 	     
     	 }
     }

     while(l < j){ printf("impar[%d] = %d\n",l ,impar[l]); l++;}
     l = 0;
     while(l < i){ printf("par[%d] = %d\n",l ,par[l]);l++;}

	 return 0;
}
