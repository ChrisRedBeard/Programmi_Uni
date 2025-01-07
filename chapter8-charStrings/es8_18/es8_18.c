/*Scrivete un programma che legga diverse righe di testo e un carattere da ricercare e che usi 
la funzione strchr per determinare il totale delle volte in cui il carattere compare nelle righe 
di testo.*/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
char *string= "Lasciate ogne speranza, voi ch'intrate.";
char carattere= 'a';
int counter=0;
//printf("\n lunghezza della stringa: %d \n",strlen(string));

// ripeti finchè nella stringa ci sono 2 caratteri e il puntatore è diverso da null
while(strlen(string)>1 && strchr(string,carattere)!=NULL ){
        string=strchr(string,carattere)+1;
        counter++;
    }

printf("\nnumero di ripetizioni del carattere %c:%d",carattere,counter);
return 0;
}