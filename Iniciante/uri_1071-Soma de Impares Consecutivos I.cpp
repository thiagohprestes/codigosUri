#include <iostream>
 
using namespace std;
 
int main() {
 	int x = 0, y = 0;
    int tImpares = 0;	

	scanf("%d %d", &x, &y);
     
    if(x < y && x % 2 != 0) x ++;
    if(x > y && x % 2 != 0) x--;

    if(x > y){
    	while(x > y){
            if(x % 2 != 0) tImpares += x; 
    		x--;
    	}
    } 
   
    else if (y > x) {
    	while(y > x){
            if(x % 2 != 0) tImpares += x; 
    		x++;
    	}

    } else tImpares = 0;
 
    printf("%d\n", tImpares);

    return 0;
}