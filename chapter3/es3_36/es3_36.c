/*

ES 3.36 
(Quanto è veloce il vostro computer?) Come potete davvero stabilire con quale velocità 
operi il vostro computer? Scrivete un programma con un ciclo while che conti da 1 a 
1.000.000.000 per incrementi di uno. Ogni volta che il conto raggiunge un multiplo di 
100.000.000, stampate quel numero sullo schermo.
Usate il vostro orologio per cronometrare quanto tempo impiega ogni ciclo di 100 milioni di iterazioni.
*/


#include <stdio.h>

//il mio computer impiega 14.61 secondi
#define max 1000000000
#define divisore 100000000
int main(void){

int cont;
 while(cont<max){
   if((cont%divisore)==0) printf("\n%d è dividore di %d\n",cont,divisore);
  cont++;
 };

    return 0;

}

