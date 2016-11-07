#include <iostream>
 
using namespace std;
 
int main() {
	int numMes;
	char mes[][13]{"January", "February", "March", "April", "May", "June", "July", "August", "September", 
     "October", "November", "December"};
     
    scanf("%d", &numMes);

    printf("%s\n", mes[numMes-1]);
    
    return 0;
}