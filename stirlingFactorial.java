import java.util.Scanner;
 
/**
 * stirlingFactorial
 */
public class stirlingFactorial {
    public static void main(String[] args) { 
        Scanner t = new Scanner(System.in);
        System.out.print("Digite un número: ");
        double numero = t.nextDouble();
    
        System.out.println("Factorial = " + stirling(numero));

        t.close();
        }   
        
    public static int stirling(double n) { 
        if (n == 1) 
            return 1; 
        double z; 
        double e = 2.71; // Valor natural de e
        
        // Método de Stirling
        z = Math.sqrt(2 * Math.PI * n) * 
            Math.pow((n / e), n); 
        return (int)(z); 
    }
} 
	
 



