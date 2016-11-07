#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    float i;   
    int a;

     for(i = 0; i <= 2.1; i+=0.2){
     	for(a = 1; a <= 3;a++){

             if((float)i == (int)i || (int)i == 2) printf("I=%d J=%.d\n", (int)i, (int)i+a);
             else printf("I=%.1f J=%.1f\n", i, i+a);
        }
     }
 
	return 0;
}