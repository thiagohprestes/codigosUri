#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
	int num;
	int den;
}Fracao;

int mdc(int, int);
Fracao somaRac(Fracao, Fracao);
Fracao diferencaRac(Fracao, Fracao);
Fracao produtoRac(Fracao, Fracao);
Fracao divisaoRac(Fracao, Fracao);
Fracao simplificaRac(Fracao);

int main(){
   char op;
   int numCasos;
   Fracao f1, f2, res;
   
   scanf("%d" , &numCasos);

   while(numCasos--){
   		scanf("%d %*c %d %c %d %*c %d" , &f1.num, &f1.den, &op, &f2.num, &f2.den);
   		if(op == '+')
   			res = somaRac(f1, f2);
   		else if(op == '-')
   			res =  diferencaRac(f1, f2);
   		else if(op == '*')
   			res = produtoRac(f1, f2);
   		else 
   			res =  divisaoRac(f1, f2);

   		printf("%d/%d = ", res.num, res.den);

   		res =  simplificaRac(res);
		printf("%d/%d\n", res.num, res.den);
   }

   return 0;
}

int mdc(int m, int n)
{	if (m < 0) m = -m;
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

Fracao diferencaRac(Fracao n1, Fracao n2){
	Fracao res;
    res.num = n1.num * n2.den - n2.num * n1.den;
	res.den = n1.den * n2.den;

	return res;
}

Fracao produtoRac(Fracao n1, Fracao n2){
	Fracao res;
    res.num = n1.num * n2.num;
	res.den = n1.den * n2.den;

	return res;
}

Fracao divisaoRac(Fracao n1, Fracao n2){
	Fracao res;
    res.num = n1.num * n2.den;
	res.den = n1.den * n2.num;

	return res;
}

Fracao simplificaRac(Fracao x){
	Fracao res;
    res.num = x.num/mdc(x.num, x.den);
	res.den = x.den/mdc(x.num, x.den);

	return res;
}
