#include <iostream>
 
using namespace std;
 
int main() {
      int x;
	  int i = 0;	

	scanf("%d", &x);
     
    if(x % 2 == 0) i = x+1;
    else i = x;

	while(i < x+12){

        printf("%d\n",i);
		i += 2;
	}
    
    return 0;
}