#include <iostream>

using namespace std;

int main(){
     int m, n, lin, col, lin2, col2, soma;

     cin >> m >> n;
     
     int matriz[m][n];

     for(lin = 0; lin < m; lin++){
     	for(col = 0; col < n; col++){
     			cin >> matriz[lin][col];
     	}
     }

     for(lin = 1; lin < m-1; lin++){
     	for(col = 1; col < n-1; col++){
     		
			 if(matriz[lin][col] == 42){
				 soma = 0;
				 for(lin2 = lin-1; lin2 <= lin+1; lin2++)
					 for(col2 = col-1; col2 <= col+1; col2++)
	                    soma += matriz[lin2][col2];				 
				 if(soma == 98){ 
				 	cout << lin+1 << ' ' << col+1 << endl;
				 	return 0;
				 }
			 }

     	}
     }

      cout << "0 0" << endl;

     return 0;
}
