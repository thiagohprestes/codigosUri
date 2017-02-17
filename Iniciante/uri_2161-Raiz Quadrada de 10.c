#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double sqrt10(short);

int main(){
  short prec;

  scanf("%hd", &prec);
  
  prec == 0 ? printf("%.10lf\n", 3.): printf("%.10lf\n", 3 + sqrt10(prec));

  return 0;
}

double sqrt10(short prec){
  if(prec == 1)
    return 1/6.;
  else
    return 1/(6. + sqrt10(--prec));
}
