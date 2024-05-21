import java.util.Scanner;
public class calculadora {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int opcion;
		int n1,n2,resultado;
		
		
		do{
			System.out.print("\nIngrese la opcion que desea realizar\n1)sumar\n2)restar\n3)multiplicar\n4)dividir\n5)salir: ");
			opcion = scanner.nextInt();
		
		switch(opcion) {
		case 1:
			System.out.print("Ingrese primer numero: ");
			n1=scanner.nextInt();
			System.out.print("Ingrese segundo numero: ");
			n2=scanner.nextInt();
			resultado=n1+n2;
			System.out.print("Resultado de la suma es "+resultado);
			break;
		case 2:
			System.out.print("Ingrese primer numero: ");
			n1=scanner.nextInt();
			System.out.print("Ingrese segundo numero: ");
			n2=scanner.nextInt();
			resultado=n1-n2;
			System.out.print("Resultado de la resta es "+resultado);
			break;
		case 3:
			System.out.print("Ingrese primer numero: ");
			n1=scanner.nextInt();
			System.out.print("Ingrese segundo numero: ");
			n2=scanner.nextInt();
			resultado=n1*n2;
			System.out.print("Resultado de la multiplicacion es "+resultado);
			break;
		case 4:
			System.out.print("Ingrese primer numero: ");
			n1=scanner.nextInt();
			System.out.print("Ingrese segundo numero: ");
			n2=scanner.nextInt();
			resultado=n1/n2;
			System.out.print("Resultado de la division es "+resultado);
			break;
		}
		
		}while(opcion!=5);
		
		

	}

}
