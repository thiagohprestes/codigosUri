#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double sqrt2(short);

int main(){
  short prec;

  scanf("%hd", &prec);
  
  prec == 0 ? printf("%.10lf\n", 1.): printf("%.10lf\n", 1 + sqrt2(prec));

  return 0;
}

double sqrt2(short prec){
  if(prec == 1)
    return 1/2.;
  else
    return 1/(2. + sqrt2(--prec));
}
