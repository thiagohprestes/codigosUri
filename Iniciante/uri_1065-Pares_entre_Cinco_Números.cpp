#include <iostream>
 
using namespace std;
 
int main() {
	int a[5];
	int i = 0;
	int tPares = 0;	

	while(i < 5){
		scanf("%d", &a[i]);
		
		if(a[i] % 2 == 0){
           tPares++;
		}
		i++;
	}

	printf("%d valores pares\n", tPares);
	
    return 0;
}