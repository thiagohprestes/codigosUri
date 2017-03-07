#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
  int n, tQuadrados;

  while(scanf("%d", &n) && n){
    tQuadrados = 0;
    
    do{
      tquadrados += n*n;
    }while(n--);
 
    printf("%d\n", tQuadrados);
  }

  return 0; 
}
