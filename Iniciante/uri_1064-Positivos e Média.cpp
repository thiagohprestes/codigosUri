#include <iostream>
 
using namespace std;
 
int main() {
	int i = 0, tPositivo = 0;
	float a[6], VTPositivo = 0, media = 0;
	
	while(i < 6){
	  scanf("%f", &a[i]);
	  i++;
    }
    
    i = 0;
    while(i < 6){
    	if(a[i] >= 0){
    		tPositivo++;
    		VTPositivo += a[i];
		}
		i++;
	}
	media = VTPositivo / tPositivo;
	
    printf("%d valores positivos\n", tPositivo);
	printf("%.1f\n", media);
	
    return 0;
}