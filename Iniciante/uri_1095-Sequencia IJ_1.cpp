#include <iostream>
 
using namespace std;
 
int main() {
	for(int i= 1, j= 60; j >= 0 ;i+= 3, j-= 5){
		printf("I=%d J=%d\n", i, j);
	}
    return 0;
}