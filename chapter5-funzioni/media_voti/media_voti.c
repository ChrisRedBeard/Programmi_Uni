/*(Valutazione qualitativa dei voti di uno studente) Scrivete una funzione qualityPoints 
che riceva in ingresso la media dei voti di uno studente e restituisca 4 se questa è compresa 
nell’intervallo 90–100, 3 se è tra 80–89, 2 se è tra 70–79, 1 se è tra 60 –69 e 0 se la media è 
più bassa di 60.*/

#include <stdio.h>
#include <stdlib.h>


int qualityPoints(int);

int main(void){

    printf("la media del ragazzo è della fascia numero %d",qualityPoints(73));
    return 0;
}

int qualityPoints(int avg){


 if(avg>=90){
    return 4;

 }else if(avg>=80){
    return 3;
 }else if(avg>=70){
      return 2;
 }else if(avg>=60){
     return 1;
 }else{
    return 0;
 }

}