
/*
 esercizio: 7.22
I simboli # rappresentano le pareti del labirinto e i punti (.) rappresentano dei quadrati nei 
possibili percorsi attraverso il labirinto.
Vi è un semplice algoritmo per attraversare un labirinto che garantisce di trovare l’uscita 
(supponendo che ve ne sia una). Se non vi è un’uscita, ritornerete al punto di partenza. 
Mettete la mano destra sulla parete alla vostra destra e iniziate a camminare in avanti.
Non togliete mai la mano dal muro. Se il labirinto gira a destra, seguite la parete alla destra.
 Se non toglierete la mano dal muro, giungerete alla fine all’uscita del labirinto.
Può darsi che vi sia un percorso più breve di quello che avete trovato, ma avete la garanzia di uscire dal labirinto.
Scrivete una funzione ricorsiva mazeTraverse per attraversare il labirinto.
La funzione deve ricevere come argomenti un array di caratteri 12 per 12 che rappresenta il labirinto e il punto 
di partenza del labirinto. Mentre mazeTraverse tenta di trovare l’uscita dal labirinto, deve 
mettere il carattere x in ogni quadrato nel percorso. 
La funzione deve stampare il labirinto 
dopo ogni movimento, così l’utente può osservare come viene risolto il problema del suo attraversamento


*/




#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#include "C:\Users\Christian\Desktop\UNIBA\Programmazione_Bochicchio\miefunz_c\mieFunz.h"


#define row 4
#define col 4
#define size 12
#define coord 2

// definire una struct per poi stampare una matrice 






//void stampaMatrice(char[size][24]);


void mazeTraverse(char[size][24],int[coord]);


void stampaMtx(Matrice); // stampa una matrice di interi
 
int main(void){

    //definizione labirinto in input
    char labr[size][24]={
        "# # # # # # # # # # # #",
        "# . . . # . . . . . . #",
        ". . # . # . # # # # . #",
        "# # # . # . . . . # . #",
        "# . . . . # # # . # . .",
        "# # # # . # . # . # . #",
        "# . . # . # . # . # . #",
        "# # . # . # . # . # . #",
        "# . . . . . . . . # . #",
        "# # # # # # . # # # . #",
        "# . . . . . . # . . . #",
        "# # # # # # # # # # # #"
    };

  
    
  //creazione della struct matrice 
    Matrice c = creaMatrice(4,4);
    int counter=-15;
// una volta creata bisogna inserire i valori nella matrice
// così facendo possiamo generare una matrice senza definire costanti e 
// si possono usare funzioni come stampaMatrice
    for(int i = 0; i < c.righe; i++)
    {
     for (int j = 0; j < c.colonne; j++)
     {
         c.data[i][j]=counter;
         counter++;
     }
     }
     
 

 printf("↓↓↓ MATRICE STRUCT ↓↓↓\n");
    stampaMatrice(c);
     printf("\n↑↑↑ MATRICE STRUCT ↑↑↑ ");

   // stampaMatrice(labr);
    //sleep(2500);

    int coordinate[coord];

    //mazeTraverse(labr,coordinate);
    
   /*clear screen
   system("cls");
   */
 return 0;

}



/*void stampaMatrice(char m[size][24]){
 
 for (size_t i = 0; i < size; i++)
 {

    for (size_t j = 0; j < 24; j++)
    {
      printf("%c",m[i][j]);
    }
    printf("\n");
 }

}*/

 


/* void mazeTraverse(char labirinto[size][24],int coordinate[coord]){
  //cordinate[0] = riga  
   //cordinate[1] = colonna

//ipotizzo che il punto di partenza sia unico sulla prima colonna
  if(coordinate[1]==0){
      for (size_t i = 0; i < size; i++)
      {
          if(labirinto[i][0]=='.'){
              labirinto[i][0]='x';
              //set delle coordinate
              coordinate[0]=i;
              coordinate[1]=0;
              printf("\n\n\n");
              stampaMatrice(labirinto);
              Sleep(1000);
          }
        }
    }
      
      printf("\nStampa passo passo: \n");

     
      
     while (labirinto[coordinate[0]][coordinate[1]]!='#'){
     {
        // mi sposto tra le colonne
        if(labirinto[coordinate[0]][coordinate[1]+2]!='#'){
         coordinate[1]=coordinate[1]+2;
         labirinto[coordinate[0]][coordinate[1]]='x';
        }else{
          //mi sposto tra le righe
          if((labirinto[coordinate[0]-1][coordinate[1]]!='#')){
            coordinate[0]=coordinate[0]-1;
            labirinto[coordinate[0]][coordinate[1]]='x';

           }else{

               coordinate[0]=coordinate[0]+1;
               labirinto[coordinate[0]][coordinate[1]]='x';
           }
        }
         if(labirinto[coordinate[0]+1][coordinate[1]]=='#'){
            mazeTraverse(labirinto,coordinate);
          }
         if(labirinto[coordinate[0]-1][coordinate[1]]=='#'){
            mazeTraverse(labirinto,coordinate);
          }
               printf("\n\n\n");
              stampaMatrice(labirinto);
              Sleep(1000);
      }
     }
 }

*/
   /* for (size_t i = 0; i < size; i++)
    {
      for (size_t j = 0; j < 24; j=j+2){
        if(labirinto[i][j]=='.'){
             labirinto[i][j]='x';
             printf('\033[2J');
             stampaMatrice(labirinto);
             Sleep(2000);
        

         }
      }
      
         
    }*/


   
 
    