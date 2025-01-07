
//Esercizio capitolo 10 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define facce 13
#define semi 4
#define num_carte 52


const char *suit[semi]={"Cuori","Fiori","Quadri","Picche"};
const char *valori[facce]={"Asso","Due","Tre","Quattro","Cinque","Sei","Sette","Otto","Nove","Dieci","Jack","Queen","King"};

typedef struct {
    const char*suit;
    const char*valori;
}Carta;

  // prototipi
  void fillDeck(Carta * const mazzo);
   void mischia(Carta * const mazzo);
 void distribuisci(const Carta * const mazzo);
/*
CONFRONTO CON L'IMPLEMENTAZIONE CON I PUNTATORI

void mischia(unsigned int[][facce]);


void stampaMatrice(unsigned int[][facce]);

void distribuisci(unsigned int[][facce]);

*/



int main(void){
   //inizializzo per usare la funzion rand();
    srand(time(NULL));



  Carta mazzo[num_carte];
  fillDeck(mazzo);
  printf("\nMazzo di partenza: \n");
  distribuisci(mazzo);
  printf("\nMazzo mischiato:\n");
  mischia(mazzo);
  distribuisci(mazzo);
  

    
    return 0;
}


void fillDeck(Carta * const mazzo){

  for (int i = 0; i < num_carte; i++)
  {
    mazzo[i].suit=suit[i%semi];
    mazzo[i].valori=valori[i/facce];
  }
  
}

void mischia(Carta * const mazzo){
 
 int i,numCasuale;

  //creo una struct temporanea
    Carta temp;

     for ( i = 0; i < num_carte; i++)
     {
       numCasuale = rand()%num_carte;
       temp = mazzo[i];
       mazzo[i]=mazzo[numCasuale];
       mazzo[numCasuale]=temp;

     }
        
}

void distribuisci(const Carta * const mazzo){
  for (int i = 0; i < num_carte; i++)
  {
    printf("\n%s di %s\n",mazzo[i].valori,mazzo[i].suit);
  }
  
}