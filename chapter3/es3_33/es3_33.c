/*
ES 3.33
(Quadrato di asterischi vuoto) Modificate il programma che avete scritto per l’Esercizio 
3.32 in modo che stampi un quadrato vuoto. Ad esempio, se il programma legge una
dimensione pari a 5, deve stampare
 *****
 *   *
 *   *
 *   *
 *****
 */

#include <stdio.h>


int main(void){

    int num;
    printf("Inserisci un numero: ");
    scanf("%d", &num);

  printf("\n");

    for (int i = 0; i < num; i++) {
        printf("*");
    }
    printf("\n");
    for (int i = 0; i < num - 2; i++) {
        printf("*");
        for (int j = 0; j <num-2; j++)
        {
           printf(" ");
        }
         printf("*");
         printf("\n");   
    }
    for (int i = 0; i < num; i++) {
        printf("*");
    }


    return 0;
}