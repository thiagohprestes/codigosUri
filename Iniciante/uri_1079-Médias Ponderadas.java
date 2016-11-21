import java.io.IOException;
import java.util.Scanner; 

public class Main {
 
    public static void main(String[] args) throws IOException {
        
      	Scanner teclado = new  Scanner(System.in);

		int numCasos = teclado.nextInt();
		
		double[] num = new double[numCasos];
        double[] num2 = new double[numCasos];
        double[] num3= new double[numCasos];
		double[] mediaP = new double[numCasos];

		for(int i = 0; i < numCasos; i++){
			 num[i]  = teclado.nextDouble();
			 num2[i]  = teclado.nextDouble();
			 num3[i]  = teclado.nextDouble();

			 mediaP[i] = ((num[i] * 2) + (num2[i] * 3) + (num3[i] * 5))/10;
        }	

        for(int i = 0; i < numCasos; i++){
             System.out.printf("%.1f\n",mediaP[i]);
        }
    }
}