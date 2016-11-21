#include <iostream>
 
using namespace std;
 
int main() {
   int i = 0, positivos = 0;
   	float num[5];
   	
   	while(i <= 5){
	scanf("%f", &num[i]);
	if(num[i] > 0) positivos++;
	i++;
	}
	
	printf("%d valores positivos\n", positivos);
    return 0;
}