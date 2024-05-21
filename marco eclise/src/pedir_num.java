import java.util.Scanner;
public class pedir_num {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int numeroIngresado;
		boolean esPrimo;
        
        do {
        	System.out.print("Ingrese un numero: ");
            numeroIngresado = scanner.nextInt();
            esPrimo = true;
        	if(numeroIngresado<100){
        		esPrimo=false;
        	}else {
        		for(int i=2;i<=Math.sqrt(numeroIngresado); i++){
					if (numeroIngresado % i == 0) {
						esPrimo = false;
						break;
					}

        		
        		}
        	}
        	
        	
        }while(esPrimo==false);
        
        
        
        
        System.out.println("Numero mayor a 100 y primo: " + numeroIngresado);
        
        scanner.close();
		
		
		
	}

}
