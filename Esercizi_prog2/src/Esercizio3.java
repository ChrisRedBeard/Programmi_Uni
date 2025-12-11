/*
 *Scrivere un programma Java che:
1. Acquisica tramite l’array args del metodo main Nome e Cognome
dell’utente e li stampi a video in un messaggio di benvenuto;
2. Inizializzi due array entrambi contenenti 8 elementi dove ogni indice
corrisponde ad un piano del dib (0 è il Piano Terra):
1. Il primo array contiene i valori di temperatura medi registrati in estate, acquisiti da
tastiera uno alla volta.
2. Il secondo contiene il numero di persone che abitualmente frequenta ogni piano,
rispettivamente: 400, 300, 200, 100, 60, 18, 18, 16.
3. Trovare il piano che necessita con più urgenza della riparazione dell’aria
condizionata rispetto ad un punteggio (relativo ad ogni piano) definito
come: numero di persone al piano * temperatura di quel piano;
4. Stampare a video il numero del piano su cui intervenire con urgenza, la
sua temperatura ed il numero di persone che lo frequentano.
Realizzare il punto 3 utilizzando un metodo che prenda in input l’array delle
temperature e l’array del numero di persone al piano e restituisca il numero
del piano su cui intervenire con più urgenza. 
 *
 *
 *
 *
 *
 * @author Christian Barbarossa
 */
import java.util.Scanner;
public class Esercizio3 {

		public static int trovaPianoUrg(double temperature[],int persPerPiano[]){
		/*Trovare il piano che necessita con più urgenza della riparazione dell’aria
		condizionata rispetto ad un punteggio (relativo ad ogni piano) definito
		come: numero di persone al piano * temperatura di quel piano;*/
		
		double punteggio=0;
		double max=temperature[0]*persPerPiano[0];
		int pianoUrg=0;
		
		for(int i=1;i<temperature.length;i++){
			punteggio=temperature[i]*persPerPiano[i];
			
			
			if(punteggio>max) {
				pianoUrg=i;
				max=punteggio;
			}
			
		}
		return (pianoUrg);
	}
	
	public static double [] inserisciTemperature(){
		System.out.println("Inserisci i valori delle temperature");
		Scanner tastiera= new Scanner(System.in);
		double temperature[]= new double[8];
		 int piano=1;
		 for(int i=0;i<8;i++){
			 System.out.println("Inserisci la temperatura del "+(piano++)+"° piano");
			 temperature[i]= tastiera.nextDouble();
		 }
		
		 tastiera.close();
		return temperature;
	}
	
	
	public static void main(String[] args) {
		System.out.println("Benvenuto "+args[0]+"!");
		//Il primo array contiene i valori di temperatura medi registrati in estate
		double temperature[]=inserisciTemperature();
		
		//Il secondo contiene il numero di persone che abitualmente frequenta ogni piano
		int persPerPiano[]= {400, 300, 200, 100, 60, 18, 18, 16};
		
		int index = trovaPianoUrg(temperature,persPerPiano);
		
		System.out.println("Il piano da controllare urgentemente è "+index+"\n Arrivederci e buona giornata.");
		
	}

}
