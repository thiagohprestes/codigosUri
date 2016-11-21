#include <iostream>
 
using namespace std;
 
int main() {
    int n, i = 0, j = 0;
    
    scanf("%d", &n);
    
    int x[n];
    
    while(i < n){
    	scanf("%d", &x[i]);
    	
    	if(x[i] >= 10 && x[i] <= 20) j++;
    	i++;
	}
	
	int k = n-j;
 
    printf("%d in\n%d out\n", j, k);
    
    return 0;
}