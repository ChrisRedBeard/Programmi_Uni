

import java.util.Scanner;
public class Esercizio3_2 {

	public static int[][] creaMatrice(int array[]){
		
		int matrice[][]= new int[array.length][array.length];
		
		for(int i=0;i<array.length;i++) {
			for(int j=0;j<array.length;j++ ) {
				matrice[i][j]=array[i];
			}
		}
		return matrice;
	}
	
	public static void stampaMatrice(int matrice[][]){
		for(int i=0;i<matrice.length;i++) {
			for(int j=0;j<matrice.length;j++ ) {
				System.out.print(matrice[i][j]);
			}
			System.out.println();
		}
	}
	
	
	public static void main(String[] args) {

		Scanner tastiera= new Scanner(System.in);
		
		System.out.println("Inserisci il numero di elementi ");
		int n= tastiera.nextInt();
		
		
		
		System.out.println("Inserisci i numeri da inserire sull diagonale separati da uno spazio ");
		int array[]= new int[n];
		for(int i=0;i<n;i++){
			array[i]=tastiera.nextInt();
	
		}
	
		
		int matrice[][]=creaMatrice(array);
		
		stampaMatrice(matrice);
		
		tastiera.close();
		
		

	}

}
