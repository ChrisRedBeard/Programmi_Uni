
import java.util.Arrays;

public class Arraysearching {
	public static void main(String[] args) {
		int[] a = new int[100];
	 //riempie un array con elementi compresi fra 0 e 99
		Arrays.sort(a);
		System.out.println("Sorted array: " + a);
		while(true) {
		int r = (int)Math.random()*1000; // random number in [0,999]
		int location = Arrays.binarySearch(a, r);
		if(location >= 0) {
			System.out.println("Location of " + r +
			" is " + location + ", a[" +
			location + "] = " + a[location]);
			break; // Out of while loop
			}
		}
	}
} 