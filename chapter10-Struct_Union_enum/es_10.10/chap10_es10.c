/*
Esercizio 10.10
(Spostamento a destra di interi) 
Scrivete un programma che sposti a destra una variabile intera di 4 bit. 
Il programma deve stampare l’intero in bit prima e dopo l’operazione di 
spostamento. Il vostro sistema mette degli O o degli 1 nei bit vuoti?
*/

#include <stdio.h>
#include <stdlib.h>

void decBin(int);

int main(void){
    int n;
    printf("Inserisci un numero naturale compreso tra 0 e 255:");
  scanf("%d",&n);
  //ho limitato la scelta del numero per rimanere su 8 bit
  while(n<0 || n>255){
    printf("Hai sbagliato!! Riprova...\n");
    printf("Inserisci un numero naturale compreso tra 0 e 255:");
    scanf("%d",&n);
  }
  printf("in binario: ");
  decBin(n);

 //operatore di shift
    n = (n>>4); 

    printf("\nil numero shiftato di 4 bit verso destra in decimale è: %d",n);
    printf(" in binario: ");
    decBin(n);


    return 0;
}


//questa funzione stampa il numero decimale preso in input in un numero binario
void decBin(int n){
  int vet[8];
  int q,r,i,dim;

  q=n;
  i=0;
  
  do{
    r=q%2;
    q=q/2;
   // printf("%d",r);
    vet[i]=r;
    i++;
  }while(q>0);
   dim=i-1;
  //for(i=7;i>=0;i--) printf("%d",vet[i]);
  //printf("\n");
  for(i=dim;i>=0;i--) printf("%d",vet[i]);
  printf("\n");
  
  return;
}
