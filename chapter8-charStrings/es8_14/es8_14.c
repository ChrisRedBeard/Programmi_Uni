/*
 ES 8.14 
 (Analisi di numeri telefonici)
 Scrivete un programma che legga un numero di telefono come 
una stringa nella forma (555) 555–5555. Il programma deve usare la funzione strtok per 
estrarre come singoli token il prefisso, le prime tre cifre e infine le ultime quattro cifre del 
numero telefonico. Le sette cifre del numero telefonico vanno concatenate in una stringa. Il 
programma deve convertire la stringa del prefisso in un int e la stringa del numero telefoni
co in un long. Vanno stampati sia il prefisso che il numero di telefono.
*/

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ceckFormat(char []);

int main(void){

    int prefisso=0;
    long int numero=0;
    char numTel[8];

    printf("\ninserisci il numero di telefono: ");
     scanf("%s",&numTel);

    while(ceckFormat(numTel)==1){
        printf("\nformato della strinag errato!\nEsempio: 555-5555\n");
        printf("\ninserisci il numero di telefono: ");
        scanf("%s",&numTel);
    };
     char *token=strtok(numTel,"-");

    prefisso=atoi(token);
    printf("\nprefisso: %d",prefisso);
    token=strtok(NULL,"-");
    numero=atol(token);
    printf("\nnumero: %d",numero);


    return 0;
}

// se restituisce 1 il formato della stringa è corretto altrimenti bisogna digitarla nuovamente 
int ceckFormat(char numTel[]){
    int flag=0;
 for(int i=0;i<3;i++){

    if(numTel[i]>='0' && numTel[i]<='9'){
  
    }else{
        flag=1;
    }
 }
    if (numTel[3]!='-')
    {
  
        flag=1;
    }
   for(int i=4;i<8;i++){

    if(numTel[i]>='0' && numTel[i]<='9'){
    
    }else{
        flag=1;
     }
    }  
    return flag;
    
 }
    