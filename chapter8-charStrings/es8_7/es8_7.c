/*
ES 8.7
(Conversione di stringhe in interi per effettuare calcoli) 
 Scrivete un programma che legga quattro stringhe che rappresentano valori interi, converta le stringhe in interi, sommi i valori 
e stampi il totale dei quattro valori

 */ 


#include <stdio.h>

#include <stdlib.h>

int main(void){

 char *stringa[5];
 int somma;
 int tmp;
 for (size_t i = 0; i < 4; i++)
 {  printf("\nInserisci il numero: ");

    scanf("%s",stringa);
    tmp=atoi(stringa);

    somma=tmp+somma;
 }
 printf("\nLa somma dei quattro valori è: %d\n",somma);
 


    return 0;
}