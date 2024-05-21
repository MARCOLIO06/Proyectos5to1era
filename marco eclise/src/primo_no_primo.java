
public class primo_no_primo {

	static boolean esPrimo(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        for (int i = 50; i <= 100; i++) {
            if (esPrimo(i)) {
                System.out.println(" Primo " + i);
            } else {
                System.out.print(" Divisores de " + i + ": ");
                for (int j = 2; j <= i; j++) {
                    if (i % j == 0) {
                        System.out.print(j + " ");
                    }
                }
                System.out.println();
            }
        }
    }

}
