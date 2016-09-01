#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
     short numCasos, i;
	 char led[102];
	 int totalLeds;
	 
	 scanf("%hd", &numCasos);
	 
	 while(numCasos--){
         scanf("%s", led);
		 
		 totalLeds = 0;
		 
		 for(i = 0; i < strlen(led); i++){
	 
			 switch (led[i]){
				 case '1' : totalLeds += 2; break;
				 case '2' : totalLeds += 5; break;
				 case '3' : totalLeds += 5; break;
				 case '4' : totalLeds += 4; break;
				 case '5' : totalLeds += 5; break;
				 case '6' : totalLeds += 6; break; 
				 case '7' : totalLeds += 3; break;
				 case '8' : totalLeds += 7; break;
				 case '9' : totalLeds += 6; break;
				 case '0' : totalLeds += 6; break;
			 }
			 
		 }
		 printf("%d leds\n", totalLeds);
	 }
	 
     return 0;
}
