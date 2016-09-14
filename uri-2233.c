#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     long long red, green, blue, total, total2, total3, a = 1;

     scanf("%llx %llx %llx" , &red, &green, &blue);
     while(a--){
	     if(red < green){ printf("1\n"); break;}

	   
	     total = (long long)pow((long long)((green/blue)),2);

	     if(red == green){
	     	 if(green == blue){printf("3\n"); break;}

	         if(green < blue){printf("2\n"); break;}

	         printf("%llx\n", total + 2); break; 
	     }

	     total2 = (long long)pow((long long)((red/green)),2);

	     if(green < blue){printf("%llx\n", total2+1); break;}

         if(green == blue){printf("%llx\n", total2*2+1); break;}

         total3 = total * total2 + total2 + 1; printf("%llx\n", total3);

     }

	 return 0;
}