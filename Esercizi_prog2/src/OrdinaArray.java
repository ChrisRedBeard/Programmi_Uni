

//importare le cose per file.csv
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.PrintStream;
import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

public class OrdinaArray {

	static void swap(int a,int b){
		int temp=a;
		a=b;
		b=temp;
	}
	
	
	static boolean relazioneOrdine(int a, int b) {
	    return (a < b) ? true: false;  // Relazione d’ordine crescente
	}
	static boolean relazioneOrdineDec(int a, int b) {
		return (a > b) ? true: false;  // Relazione d’ordine decrescente
	}
	
	
   /*Nel caso ottimo abbiamo n-1 confronti
    * 
    * Nel caso peggiore l'algoritmo effettua n confronti 
    * che corrispondono alla somma di Gauss */
static int bubbleSort(int a[]){
		int numConfronti=0;
		
		for(int i=0;i<a.length-1;i++){
			boolean scambiAvvenuti= false;
			 for(int j=0;j<a.length-i;j++){
				 numConfronti=numConfronti+1;
				 if(!relazioneOrdine(a[j-1],a[j])) {
					 swap(a[j-1],a[j]);
					 scambiAvvenuti=true;
				 }
			 }
			 if(!scambiAvvenuti) break;
		}
		return numConfronti;
	}
	
public static int indiceElementoMinimo(int a[]){
		int minIndex= 0;
		
		for(int i=1;i<a.length;i++){
			if(a[i]<a[minIndex]){
				minIndex=i;
			}
		}
		return minIndex;
	}
	
static int insertionSort(int a[]){
	 int confronti=0;
	 int minJ=indiceElementoMinimo(a);
	 
	 confronti= confronti+a.length-1;// perché nel ciclo di indiceElementoMinimo facciamo A.length-1 confronti
	 swap(a[minJ],a[0]);
			 
			 for (int k=1;k<a.length-2;k++){
			   int x=a[k+1];
			   int j=k;
			    while(j>= 1 && a[j]>x){
			    	confronti++;
			    	a[j+1]=a[j]; //shift a destra
			    	j--;
			    }
			   
				//se il ciclo si interrompe per la condizione false, ho comunque fatto l'ultimo confronto
			    if(j>=1){
			    	confronti++;
			    }
			    
			    a[j+1]=x;
			    
			 }
			
    return confronti;
	}
	
	//static int selectionSort(int a[]){}
	

/*
 * Partiziona il vettore rispetto all'elemento x e restituisce il punto di separazione
 * 
 * @param numConfronti mi serve per tenere traccia del num di confronto, dato che non posso restituire 2 risultati da una funzione
 * */
//IMPARARE A MEMORIA
private static int partition(int a[],int inf,int sup, int numConfronti[]) {
	int i,j;
	numConfronti[0]=0;
	i=inf;
	j=sup;
	int med=(inf+sup)/2;
	int x=a[med];
	
	swap(a[inf],a[med]);
	i = inf;
	j= sup;
	
	while(true) {
	// lo inseriamo perché altrimenti  se non entriamo nel secondo while ci perdiamo un confronto	
		numConfronti[0]++; 
		while(i<= sup && relazioneOrdine(a[i],x)) {
			i++;
			numConfronti[0]++;
		}
			while(a[j]>x) 
			{
				j--;
				numConfronti[0]++;
			}
			if(i<j){
				swap(a[i],a[j]);
			}else break;
			
		}
	
		swap(a[inf],a[j]);
	
	return j;
}



private static int quicksort(int a[],int inf,int sup) {
	int numConfronti=0;
	if(sup>=inf) {
		
		int localNumConfronti[]= new int[1];
		int pos= partition(a,inf,sup,localNumConfronti);
		numConfronti=numConfronti+localNumConfronti[0];
		
		if((pos-inf)<(sup-pos+1)){
			numConfronti=numConfronti+quicksort(a,inf,pos-1);
			numConfronti=numConfronti+quicksort(a,pos+1,sup);
		}else{
			numConfronti=numConfronti+quicksort(a,pos+1,sup);
			numConfronti=numConfronti+quicksort(a,inf,pos-1);
		}
	}
	return numConfronti;
}


/*
 * Inizializza l'array di interi A con numeri interi generati in maniera casuale 
 * con valore tra 1 e a.length
 * @param a
 */
	static void inizializzaArrayCasuale(int a[]){
		 Random rand = new Random(); // inizializza il generatore
		for(int i=0;i<a.length;i++){
			a[i]=rand.nextInt(a.length);
		}
	}
	
	/*
	 * Inizializza l'array di interi A con i numeri interi 1, 2, 3,..., a.length
	 * @param a
	 */
	static void inizializzaArrayCrescente(int a[]){
		for(int i=0;i<a.length;i++){
			a[i]=5*(i+1);
		}
	}
	
	/*
	 * Inizializza l'array di interi A con numeri interi a.length, a.length-1,...,2, 1
	 * @param a
	 */
	static void inizializzaArrayDecrescente(int a[]){

		for(int i=0;i<a.length;i++){
			a[i]=5*(a.length-i);    
		}
	}
	
	static void stampaArray (int a[]){
		for(int i=0;i<a.length;i++) {
			System.out.print(" "+a[i]+" ");
		}
	}
	
	public static void main(String[] args){
		
		Scanner tastiera = new Scanner(System.in);
		
		System.out.println("Inserisci la lunghezza dell'array: ");
		int lunghezza = tastiera.nextInt();
		tastiera.close();
		
		int a[]=new int[lunghezza];
		inizializzaArrayCasuale(a);
		stampaArray(a);
		System.out.println("");
		inizializzaArrayCrescente(a);
		stampaArray(a);
		System.out.println("");
		inizializzaArrayDecrescente(a);
		stampaArray(a);
		System.out.println("");
		bubbleSort(a);
		stampaArray(a);
		
		
		return;
	}
	
}
