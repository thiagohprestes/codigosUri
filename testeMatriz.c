#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	short int i, j, matriz[9][9];

	for(i = 1; i <=10; i++){
		 printf("%hd : ", i);
		for(j = 1; j<= 10; j++){
			matriz[i][j] = 0;
			printf("%hd ", matriz[i][j]);
			j++;
		}
		printf("\n");
	}
	return 0;
}