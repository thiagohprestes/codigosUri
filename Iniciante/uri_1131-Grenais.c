#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	short int inter, grem, vInter = 0, vGrem = 0, empate = 0,
	          resp, grenais = 1;

   while(1){
		scanf("%hd %hd", &inter, &grem);
	    
	    if (inter > grem) vInter++;
	    else if (grem > inter) vGrem++;
	    else empate++;

	    printf("Novo grenal (1-sim 2-nao)\n");
	    scanf("%hd", &resp);
	    if(resp != 1) break;

	    grenais++;

    }
       printf("%hd grenais\nInter:%hd\nGremio:%hd\nEmpates:%hd\n", grenais, vInter, vGrem, empate);
       if(vInter > vGrem) printf("Inter venceu mais\n");
       else if(vGrem > vInter) printf("Gremio venceu mais\n");
       else printf("Nao houve vencedor\n");

	return 0;
}