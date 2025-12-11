


/*
 * Traccia:
 *  1) Chieda in input all’utente il numero N di numeri che si vogliono inserire
 *  2) Acquisisca da tastiera N numeri interi chiedendoli all’utente uno alla volta 
 * 3) Durante l’acquisizione dei numeri, usando la classe Math, memorizzare:
 * - il numero più grande inserito max
 * -il numero più piccolo inserito min
 * - il numero più grande in valore assoluto maxabs
 * 
 * 4) Stampare a video il risultato dell'espressione (max-min)^maxabs
 * */



import java.util.Scanner;
import java.lang.Math;

public class Esercizio2_1 {

	public static void main(String[] args) {

		Scanner tastiera = new Scanner(System.in);
		
		System.out.println("Quanti  numeri vuoi inserire? Digita: ");
		int n = tastiera.nextInt();
		int min=0,max=0,maxAbs=0;
		
		for(int i=0; i<=n; i++) {
			System.out.println("Inserisci il "+(i)+"° numero: ");
			n = tastiera.nextInt();
			min=n;
			 // Aggiorna massimo e minimo
            max = Math.max(max, n);
            min = Math.min(min, n);

            // Aggiorna massimo in valore assoluto
            maxAbs = Math.max(maxAbs, Math.abs(n));
		}

        double risultato = Math.pow((max - min), maxAbs);

 
        System.out.println("\nNumero massimo: " + max);
        System.out.println("Numero minimo: " + min);
        System.out.println("Massimo valore assoluto: " + maxAbs);
        System.out.println("Risultato dell'espressione (max - min) * maxAbs = " + String.format("%.3f",risultato));
		
		
		
		tastiera.close();
	}

}
