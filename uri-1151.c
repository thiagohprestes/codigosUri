#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	short int n, i;
    int num[47] = {0, 1};

	scanf("%hd", &n);

	for(i = 0; i < n; i++){
         num[i+2] = num[i] + num[i+1];
         if(n - i == 1) printf("%d", num[i]);
         else printf("%d ", num[i]);
	}

	printf("\n");

	return 0;
}