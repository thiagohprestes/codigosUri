#include <iostream>
 
using namespace std;
 
int main() {
int num;
    
    scanf("%d", &num);

		for(int i = 2; i <= num; i+=2){
          printf("%d^2 = %d\n", i, i*i); 
		}
    return 0;
}