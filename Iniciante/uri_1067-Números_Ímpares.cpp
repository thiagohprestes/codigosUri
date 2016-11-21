#include <iostream>
 
using namespace std;
 
int main() {
    
     short x;
	 short i = 1;	

	scanf("%hd", &x);

	while(i <= x){

        printf("%d\n",i);
		i += 2;
	}
 
    return 0;
}