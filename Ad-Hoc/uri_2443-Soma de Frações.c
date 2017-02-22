#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
	int num;
	int den;
}Fracao;

Fracao somaRac(Fracao, Fracao);
Fracao simplificaRac(Fracao);

int main(){
    Fracao f1, f2, res;

    scanf("%d %d %d %d", &f1.num, &f1.den, &f2.num, &f2.den);
    
    res = somaRac(f1, f2);
    res = simplificaRac(res);

    printf("%d %d\n", res.num, res.den);

   	return 0;
}

int mdc(int m, int n){	
	if (m < 0) m = -m;
	if (n < 0) n = -n;

	if (m % n == 0)
		return n;
	else
		return mdc(n, m % n);
}

Fracao somaRac(Fracao n1, Fracao n2){
	Fracao res;
    res.num = n1.num * n2.den + n2.num * n1.den;
	res.den = n1.den * n2.den;

	return res;
}

Fracao simplificaRac(Fracao x){
	Fracao res;
    res.num = x.num/mdc(x.num, x.den);
	res.den = x.den/mdc(x.num, x.den);

	return res;
}
