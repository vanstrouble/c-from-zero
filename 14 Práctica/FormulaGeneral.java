import java.util.Scanner;

/**
 * Programa para calcular la fórmula general
 */
public class FormulaGeneral {

    public static void main(String[] args) {
        Scanner leer = new Scanner(System.in);

        double a, b, c, d;
        double x1, x2;
        System.out.print("Coeficiente a: ");
        a = leer.nextFloat();
        System.out.print("Coeficiente b: ");
        b = leer.nextFloat();
        System.out.print("Coeficiente c: ");
        c = leer.nextFloat();

        leer.close();

        d = Math.pow(b, 2) - (4 * a * c);

        if (d < 0) {
            System.out.println("\nLa ecuación no tiene solución real");
        } else {
            x1 = ((-1 * b) + Math.sqrt((b * b) - ((4 * a) * c))) / (2 * a);
            x2 = ((-1 * b) - Math.sqrt((b * b) - ((4 * a) * c))) / (2 * a);

            System.out.printf("\nResultados:\nX1 = %.3f\nX2 = %.3f\n", x1, x2);
        }
    }
}