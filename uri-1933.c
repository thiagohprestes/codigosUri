#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	 short int A, B;

	 scanf("%hd %hd", &A, &B);

	 if(A > B) printf("%hd\n", A);
	 else printf("%hd\n", B);

	 return 0;
}