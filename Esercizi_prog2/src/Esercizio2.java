
/* TRACCIA:
 * 1) Chieda in input all’utente il numero N di parole che si vogliono inserire
 * 2) Acquisisca da tastiera N parole in sequenza, chiedendole all’utente una alla volta
 *  - “Parola corta” se la lunghezza della parola è minore di 3;
 *  - “Parola di media lunghezza” se la parola ha lunghezza tra 3 e 8;
 *  - “Parola lunga” se la lunghezza della parola è maggiore di 8;
 *  Realizzare la stampa della stringa corretta attraverso un metodo che prende in input la lunghezza di una parola acquisita
 * 
 * */

import java.util.Scanner;
public class Esercizio2 {

	public static void main(String[] args) {
		
		 System.out.println("Inserisci il numero di parole da inserire: ");
		 Scanner tastiera = new Scanner(System.in);
		 int n = tastiera.nextInt();
		 
		 String s="";
		 for(int i=0; i<n; i++){
			 System.out.println("Inserisci la "+(i+1)+"\u1D43 parola: ");
			 s=tastiera.next();
			 valutaLunghezzaParola(s.length());
			 
		 }
		 
		 tastiera.close();
		 System.out.println("Programma terminato");
	}
	
	static void valutaLunghezzaParola(int n) {
		
		if(n<3) {
			System.out.println("Parola corta ");
		}else if(n >8 ) {
			System.out.println("Parola lunga ");
		}else {
			System.out.println("Parola media ");
		}
	}
	

}
