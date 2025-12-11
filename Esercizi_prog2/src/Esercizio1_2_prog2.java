
/*
 * Scrivere un programma Java che:
1. Chieda in input all’utente 3 numeri interi separati da uno spazio
2. Chieda in input all’utente 3 parole, separate dal carattere &
3. Stampi a video il seguente messaggio:
Abbiamo “stimato” che la media dei numeri che pensi è: …, mentre la
lunghezza media delle parole che digiti è: …
rimpiazzando al posto dei puntini la media dei numeri inseriti al punto 1 e la
lunghezza media delle parole inserite al punto 2, rispettivamente. Le medie
devono apparire con due cifre decimali.
 * 
 * */

/*
 * @author Christian Barbarossa
 * @version 1.0.0
 * 
 * */
import java.util.Scanner;

public class Esercizio1_2_prog2 {

	public static void main(String[] args) {
		int n1,n2,n3;
		Scanner tastiera = new Scanner(System.in);
		
		System.out.println("Ciao!");
		System.out.println("Inserisci il primo numero: ");
		n1= tastiera.nextInt();
		n2= tastiera.nextInt();
		n3= tastiera.nextInt();
		// qui c'è scritto Syste al posto di System
		System.out.println("inserisci tre parole separate da & ");
		tastiera.useDelimiter("&");
	
		String s1,s2,s3;
		s1=tastiera.next();
		s2=tastiera.next();
		s3=tastiera.next();
 
        float mediaNum= (n1+n2+n3)/3;
        
        float mediaCaratteri= (s1.length()+s2.length()+s3.length())/3;
		System.out.println("Abbiamo “stimato” che la media dei numeri che pensi è:"+ mediaNum+", mentre la\r\n"
				+ "lunghezza media delle parole che digiti è:"+mediaCaratteri+ "\r\n"
				+ "");
		tastiera.close();
	}
	

	}