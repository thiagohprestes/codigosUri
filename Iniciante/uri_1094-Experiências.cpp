#include <iostream>
 
using namespace std;
 
int main() {

		int numCasos = 0, coelhos = 0, ratos = 0, sapos = 0, tCobaias = 0;
		double pCoelhos = 0.0, pRatos = 0.0, pSapos = 0.0;
                
            scanf("%d", &numCasos);
            
        int numCobaias[numCasos];
		char tipoCobaia[numCasos];

		for(int i = 0; i < numCasos; i++){
			 
			 scanf("%d %c", &numCobaias[i], &tipoCobaia[i]); 

                         
			 tCobaias += numCobaias[i]; 

                switch (tipoCobaia[i]) {
                    case 'C':
                        coelhos += numCobaias[i];
                       break;
                    case 'R':
                        ratos+= numCobaias[i];
                        break;
                    case 'S':
                        sapos+= numCobaias[i];
                        break;   
                    default:
                        break;
                }
        }	

        pCoelhos = ((double)coelhos/tCobaias)*100;
        pRatos = ((double)ratos/tCobaias)*100;
        pSapos = ((double)sapos/tCobaias)*100;

        printf("Total: %d cobaias\n",tCobaias);
        printf("Total de coelhos: %d\n", coelhos);
        printf("Total de ratos: %d\n", ratos);
        printf("Total de sapos: %d\n", sapos);
        printf("Percentual de coelhos: %.2lf %%\n", pCoelhos);
        printf("Percentual de ratos: %.2lf %%\n", pRatos);
		printf("Percentual de sapos: %.2lf %%\n", pSapos);
    return 0;
}