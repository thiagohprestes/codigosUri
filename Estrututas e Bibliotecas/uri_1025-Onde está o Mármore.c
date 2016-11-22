#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int compara(const void*, const void*);

int main(){
	char achou;
     int n, q, i, j, k = 0;
     int *marmores, *consultas;

     while(scanf("%d %d", &n, &q) && (n + q)){
     	  
      marmores = (int *) malloc(n*sizeof(int));
      consultas = (int *) malloc(q*sizeof(int));

     	for (i = 0; i < n; i++)
     		scanf("%d", &marmores[i]);

     	for (i = 0; i <	q; i++)
     		scanf("%d", &consultas[i]);
			
		qsort(marmores, n, sizeof(int), compara);

        printf("CASE# %d:\n", ++k);

		for (i = 0; i <	q; i++){
	     	for(j = achou = 0; j < n; j++){
		     	if(marmores[j] == consultas[i]){
		     		achou = 1;
		     		break;
		     	}
     	    }
            if(achou)
     	          printf("%d found at %d\n", consultas[i], j+1);
            else  printf("%d not found\n", consultas[i]);

     	}
     }
     free(marmores);
     free(consultas);

     return 0;
}

int compara(const void *p1, const void *p2){
	int *i = (int *)p1, *j = (int *)p2;
	if(*i < *j)
		return -1;
	else if(*i > *j)
		return 1;
	else
		return 0;
}