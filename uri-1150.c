#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int x, z, i, j = 0, total = 0;

	scanf("%d %d", &x, &z);
    
    if(z <= x){
		while(1){
			scanf ("%d", &z);
			if(z > x) break;
		}
    }

    for(i = x; total <= z; i++, j++){
                total+= i;
    }
    
    printf("%d\n", j);

	return 0;
}