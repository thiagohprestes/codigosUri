#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     long long red, green, blue, total, total2, total3;

     scanf("%llx %llx %llx" , &red, &green, &blue);
     
     if(red < green){ printf("1\n"); return 0;}

     total = (long long)pow((long long)((green/blue)),2);
     
     if(red == green){
	 if(green == blue){printf("3\n"); return 0;}

         if(green < blue){printf("2\n"); return 0;}

	 printf("%llx\n", total + 2); return 0; 
     	
     }
 
      total2 = (long long)pow((long long)((red/green)),2);

      if(green < blue){printf("%llx\n", total2+1); return 0;}

      if(green == blue){printf("%llx\n", total2*2+1); return 0;}

      total3 = total * total2 + total2 + 1; printf("%llx\n", total3);

      return 0;
}
