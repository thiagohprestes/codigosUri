#include <iostream>

int main() {
	int a, b, c, d;
	
	scanf("%i %i %i %i", &a, &b, &c, &d);
	
	if(b > c && d > a && (c+d) > (a+b) && c >=0 && d >=0 && a % 2 == 0)//teste se valores são aceitos conforme regras dos problemas
	    printf("Valores aceitos\n");
	
	else printf("Valores nao aceitos\n");

    return 0;
}
