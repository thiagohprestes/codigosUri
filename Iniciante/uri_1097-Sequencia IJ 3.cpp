#include <iostream>
 
using namespace std;
 
int main() {
	int j= 7, a;
	
	for(int i= 1; i < 10 ;i+= 2){
		for(; a <= 3; j--, a++){
			printf("I=%d J=%d\n", i, j);
		}
		j+= 5;
		a = 1;
	}
    return 0;
}