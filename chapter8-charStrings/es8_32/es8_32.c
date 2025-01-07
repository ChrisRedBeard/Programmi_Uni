/*Nelle corrispondenze d’affari le date sono comunemente stampate in diversi formati differenti. 
Due dei formati più comuni sono 21/07/2003 e July 21, 2003
Scrivete un programma che legga una data nel primo formato e la stampi nel secondo.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ANSI_COLOR_RED     "\033[31m"  // rosso
#define ANSI_COLOR_RESET   "\033[0m"   // Reset to default

int main(){
    int giorno,mese,anno;
    char dataInserita[11]; //uso per memorizzare la data inserita

    char* mesi[]={"gennaio","febbraio","marzo","aprile","maggio","giugno","luglio","agosto",
    "settembre","ottobre","novembre","dicembre"};

    int errore=0; // uso quetso errore come flag

    printf("Inserisci data nel formato GG/MM/AAAA:");
    scanf("%10s",dataInserita); // l'utente inserirà 10 caratteri 2 del gg,2 mm e 4 anno

    if(sscanf(dataInserita,"%d/%d/%d",&giorno,&mese,&anno)==3){       //uso la funzione sscanf per suddividere la data in 3 numeri
        if ((giorno>=1 && giorno<=31) && mese<=12)
        {
            if((anno%4)!=0){
                if((mese==2) && giorno==29){
                
                   errore=1;  
                }
            }
            
            if((mese==4 || mese==6 ||mese==9 ||mese==11) && giorno==31){
                   errore=1;
               }
            

        }else{
                 errore=1;
        }
        if(errore==0){
            printf("ecco la data convertita:%s %d,%d",mesi[mese-1],giorno,anno);  //converto la data nel formato richiesto dalla traccia
        }else{
            printf(ANSI_COLOR_RED);
            printf("Data non valida\n");
            printf(ANSI_COLOR_RESET);
        }
    }
    return 0;
    
    }

    