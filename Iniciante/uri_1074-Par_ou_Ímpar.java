import java.io.IOException;
import java.util.Scanner; 

public class Main {
 
    public static void main(String[] args) throws IOException {
  
        Scanner teclado = new  Scanner(System.in);
		int numCasos = teclado.nextInt();
                
                int num[] = new int[numCasos];
                
		for(int i = 0; i < numCasos; i++){
                    
	            num[i] = teclado.nextInt();

        }

        for(int i = 0; i < numCasos; i++){
			if (num[i] % 2 == 0 && num[i] != 0) System.out.print("EVEN "); 
                        else if (num[i] != 0) System.out.print("ODD ");

			if(num[i] > 0) System.out.println("POSITIVE");
		    else if(num[i] < 0) System.out.println("NEGATIVE");
		    else System.out.println("NULL");
		}
 
    }
 
}