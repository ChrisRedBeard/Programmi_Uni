/*
NOME: Christian Savino
COGNOME: Barbarossa
DATA: 06/11/2024
Corso: programmazione
Prof: Bochicchio

Traccia: Scrivere un programma che permetta di inserire un vettore e lo ordina
  tramite i 2 metodi : ripple-sort e bubble-sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 7

void bubbleSort(int vet[]);


void printArr(int vet[]);


int main(){
    

    int arr[SIZE]={1,-4,5,2,10,0,1};
    
     printf("il vettore in input: ");
      printArr(arr);
     bubbleSort(arr);

     printf("\nil vettore ordinato:");
     printArr(arr);



    return 0;
}



void bubbleSort(int vet[]){
 bool scambio;
   int cont=0;
    int sup = SIZE - 1;
    do {
      scambio = false;
      for (int i = 0; i < sup; i++) {
        int temp;

        if (vet[i] > vet[i + 1]) {
          temp = vet[i];
          vet[i] = vet[i+1];
          vet[i+1] = temp;
          scambio = true;
        }
          cont=cont+1;
      }
      sup = sup - 1;
     printf("\nQuesto è il numero di cicli eseguiti dall'ordinamento per scambio : %d",cont," ");
    } while (scambio);


}


void printArr(int vet[]){

 for(int i=0; i < SIZE;i++){
    printf(" %d ",vet[i]);

 }


}


