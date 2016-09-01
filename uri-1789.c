#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
int main(){
	 short a, b;
     short numLesmas, lesma;

     while(scanf("%hd" , &numLesmas) != EOF){
          a = b = FALSE;
     	 while(numLesmas--){
	     	 scanf("%hd" , &lesma);
	     	 if (lesma >= 20) a = TRUE;
	     	 else if(lesma >= 10) b = TRUE;
     	}
     	if(a) printf("3\n");
        else if(b) printf("2\n");
        else printf("1\n");
     }
	 return 0;
}