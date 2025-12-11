
import java.util.Scanner;

public class PrimoProgramma {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// qui c'era scritto printn al posto di println
		System.out.println("Ciao!");
		System.out.println("Eseguo la somma di due numeri.");
		// qui c'è scritto Syste al posto di System
		System.out.println("Digita entrambi i numeri sulla stessa riga:");

		// qui c'era scritto inte al posto di int
		int n1, n2;

		Scanner tastiera = new Scanner(System.in);

		n1 = tastiera.nextInt();
		n2 = tastiera.nextInt();
		int n3= tastiera.nextInt();
		// qui c'era scritto tastiea al posto di tastiera
		tastiera.close();
		
		System.out.println("Ecco la somma dei tre numeri:");
		System.out.println(n1 + n2 + n3);
	}

	}
