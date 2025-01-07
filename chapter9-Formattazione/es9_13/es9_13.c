/**
 *  9.13 (Leggere un intero con ogni specificatore di conversione di scanf)  Scrivete un programma 
che legga il valore 437 usando ognuno degli specificatori di conversione per scanf. Stam
pate ogni valore letto usando tutti gli specificatori di conversione di interi.
 */
#include <stdio.h>

int main() {
    int d, u, o, x;

    // Leggere il valore 437 usando diversi specificatori di conversione
    printf("Inserisci il valore 437: ");
    
    // Legge come intero decimale
    scanf("%d", &d);

    // Stampa i valori letti usando tutti gli specificatori di conversione per interi
    printf("Valore letto come intero decimale: %d\n", d);
    printf("Valore letto come intero non negativo: %u\n", d);
    printf("Valore letto come intero ottale: %o\n", d);
    printf("Valore letto come intero esadecimale: %x\n", d);

    return 0;
}