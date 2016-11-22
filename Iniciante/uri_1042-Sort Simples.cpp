#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

     if (a < b)                                          
         if (b < c) printf("%d\n%d\n%d", a, b, c);      	                                            
         else  if (a < c) printf("%d\n%d\n%d", a, c, b);   
     else printf("%d\n%d\n%d", c, b, a);  

     else if (b < c)                                      
        if (a < c) printf("%d\n%d\n%d", b, a, c); 
       else printf("%d\n%d\n%d", b, c, a);        
    else printf("%d\n%d\n%d", c, b, a);  
    
    printf("\n\n%d\n%d\n%d\n", a, b, c);
	
    return 0;
}
