import java.io.IOException;
import java.util.Scanner; 

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner teclado = new  Scanner(System.in);
		
		int maior = 0, posicao = 0;
		int[] num = new int[100];

		for(int i = 0; i < 100; i++){
			 
			 num[i]  = teclado.nextInt();

			 if(num[i] > maior){
			  maior = num[i];
			  posicao = i+1;
			}
                }	

        System.out.println(maior);
        System.out.println(posicao);
 
    }
 
}