/*
 11.16 (Inviare in uscita su un fpunt le dimensioni dei tipi) Scrivete un programma che usi l’opera
tore sizeof per determinare le dimensioni in byte dei vari tipi di dati sul vostro computer. 
Scrivete i risultati sul fpunt "datasize.dat", così che dopo possiate stampare i risultati. Il 
formato per i risultati sul fpunt deve essere il seguente (le dimensioni dei tipi sul vostro com
puter potrebbero essere diverse da quelle mostrate nell’output dell’esempio):
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

 FILE *fpunt;
 

 if ((fpunt=fopen("datasize.dat","w"))==NULL){
    printf("\nImpossibile accedere al file!\n");
 }else{
    
/*
%zu è uno specificatore di formato utilizzato nella funzione printf e 
nelle funzioni correlate per stampare valori di tipo size_t.

size_t è un tipo di dato non firmato (unsigned) utilizzato per rappresentare la dimensione di oggetti in byte.
È comunemente usato per indicare la dimensione di array,
la lunghezza di stringhe e il risultato dell'operatore sizeof.
*/

    fprintf(fpunt, "Dimensioni dei tipi di dati:\n");
    // Scrivo nel file le dimensioni dei vari tipi di dati
    fprintf(fpunt, "char: %zu byte\n", sizeof(char));
    fprintf(fpunt, "int: %zu byte\n", sizeof(int));
    fprintf(fpunt, "float: %zu byte\n", sizeof(float));
    fprintf(fpunt, "double: %zu byte\n", sizeof(double));
    fprintf(fpunt, "short: %zu byte\n", sizeof(short));
    fprintf(fpunt, "long: %zu byte\n", sizeof(long));
    fprintf(fpunt, "long long: %zu byte\n", sizeof(long long));
    fprintf(fpunt, "pointer: %zu byte\n", sizeof(void*));

    // Chiudere il file "datasize.dat"
    fclose(fpunt);

    printf("Le dimensioni dei tipi di dati sono state scritte in datasize.dat\n");

 }

 


    return 0;
}