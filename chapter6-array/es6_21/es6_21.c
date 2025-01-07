/*
ES 6.21
(Sistema di prenotazione per compagnie aeree)
Una piccola compagnia aerea ha appena acquistato un computer per il suo nuovo sistema automatico di prenotazione.
Il presidente vi ha chiesto di programmare il nuovo sistema. Scriverete un programma per assegnare i posti 
su ogni volo dell’unico aereo della compagnia (capacità: 10 posti).
Il vostro programma deve stampare il seguente menu di alternative:
 Please type 1 for "first class"
 Please type 2 for "economy"
 Se la persona scrive 1, allora il vostro programma deve assegnare un posto in prima classe 
(posti da 1 a 5). Se la persona scrive 2, allora il vostro programma deve assegnare un posto 
in classe economy (posti da 6 a 10). Il vostro programma deve quindi stampare una carta 
d’imbarco indicante il numero del posto della persona e se questo si trova in prima classe o 
in classe economy.
 Usate un array unidimensionale per rappresentare la mappa dei posti dell’aereo. Inizializza
te tutti gli elementi dell’array a 0 per indicare che tutti i posti sono vuoti. Quando ogni posto 
viene assegnato, ponete l’elemento corrispondente dell’array a 1 per indicare che il posto 
non è più disponibile.
 Il vostro programma, naturalmente, non deve mai assegnare un posto che è già stato assegna
to. Quando la prima classe è piena, il vostro programma deve domandare alla persona se è 
disposta ad accettare un posto in classe economy (e viceversa). Se lo è, assegnate il posto 
appropriato; se non lo è, stampate il messaggio "Next flight leaves in 3 hours."

*/

#include <stdio.h>
#include<windows.h>

#define posti 10

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


void scegliPosto(int,int[]);


int postiFirst=5; // posti disponibili inizialmente 
int postiEconomy=5; // posti disponibili inizialmente 

int main(void){
   

    int disponibili[posti]={0};

    int scelta;

  
     while (1)
     {    
        if(postiEconomy==0 && postiFirst==0){
            printf(ANSI_COLOR_RED);
           Sleep(2000);
             printf("\nPosti terminati per questo volo");
             printf(ANSI_COLOR_RESET);
           return 0;
         }
        printf("\nBenvenuto nel nostro sistema di prenotazione\nChe tipo di biglietto vuoi comprare?\n");
        printf("Digitare 1 per la Prima Classe\nDigitare 2 per la classe Economy: ");
 
       scanf("%d",&scelta);

        scegliPosto(scelta,disponibili);
     }
     return 0;
     
}



void scegliPosto(int scelta,int disponibili[]){


   int cambio=2;
   if (scelta==1)
   {
    if (postiFirst==0)
    {
        printf("\nNon ci sono posti disponibili nella Prima Classe! \n");
        printf("\nVorresti prendere un posto nella classe Economy?\n(1=SI, 0=NO) : ");
    
        scanf("%d",&cambio);
        if (cambio==1)
        {
             if(postiEconomy==0){
                 printf("\nNon ci sono posti disponibili nella classe Economy! \n");
                 printf("\nIl prossimo volo parte tra 3 ore \n");
            }else{
             for (size_t i =(posti/2); i < posti; i++)
              {
                 if(disponibili[i]==0)
                 {
                    disponibili[i]=1;
                    printf("\n_________CARTA D'IMBARCO___________\n");
                    printf("\nHai prenotato un posto nella classe Economy! \nPosto n.%d",i+1);
                    printf("\n___________________________________\n");
                    postiEconomy--;
                    break;
                 }
                
              }
            }
        }else if(cambio==0){
              printf("\nIl prossimo volo parte tra 3 ore \n");
        }
        
        
    }else{ 
     for (size_t i = 0; i < (posti/2); i++)
     {
        if(disponibili[i]==0){
            disponibili[i]=1;
            printf("\n_________CARTA D'IMBARCO___________\n");
            printf("\nHai prenotato un posto nella Prima Classe! \nPosto n.%d",i+1);
            printf("\n___________________________________\n");
            postiFirst--; //serve per contare i posti liberi
            break;
        }
      } 
    }
   }

   if(scelta==2){
    if(postiEconomy==0){
        printf("\nNon ci sono posti disponibili nella classe Economy! \n");
        printf("\nVorresti prendere un posto nella Prima Classe?\n(1=SI, 0=NO) : ");
    
        scanf("%d",&cambio);
        if (cambio==1)
        {
             if(postiFirst==0){
                 printf("\nNon ci sono posti disponibili nella Prima classe\n");
                 printf("\nIl prossimo volo parte tra 3 ore \n");
            }else{
             for (size_t i =0 ; i < posti/2; i++)
              {
                 if(disponibili[i]==0)
                 {
                    disponibili[i]=1;
                    printf("\n_________CARTA D'IMBARCO___________\n");
                    printf("\nHai prenotato un posto nella Prima Classe \nPosto n.%d",i+1);
                     printf("\n___________________________________\n");
                    postiFirst--;
                    break;
                 }
                
              }
            }
        }else if(cambio==0){
              printf("\nIl prossimo volo parte tra 3 ore \n");
        }
        
        
    }else{
     for (size_t i =(posti/2); i < posti; i++)
      {
        if(disponibili[i]==0)
        {
            disponibili[i]=1;
            printf("\n_________CARTA D'IMBARCO___________\n");
             printf("\nHai prenotato un posto nella Prima Classe \nPosto n.%d",i+1);
             printf("\n___________________________________\n");       
            postiEconomy--;
            break;
        }
        
       }
    }

    
   }
   
  

}