#include <iostream>

int main() {
	int t, vm;
	float kml = 12.0;
	
	scanf("%i %i", &t, &vm);
	
	printf("%.3f\n", (vm * t) / kml);//calculando qtde de combustivel gasto e imprimindo

    return 0;
}
