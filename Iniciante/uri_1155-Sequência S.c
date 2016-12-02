#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	double s = 1;
	int a;

    for(a = 2; a < 101; a++){
		s += 1.0/a;
    }

    printf("%.2lf\n", s);

    return 0;
}
