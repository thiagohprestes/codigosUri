#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	 double s = 1;
	 int a = 3, b = 2, c= 0;

     for(a = 3, b = 2; a < 40; a+=2, b*=2){
		s += (double)a/b;
     }

     printf("%.2lf\n", s);

	 return 0;
}