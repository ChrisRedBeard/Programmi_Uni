
//ES 7.17 
// (Simulazione: la tartaruga e la lepre)
#include <stdio.h>
#include <time.h>

int vettL[70]={0}; // percorso iniziale 
int vettT[70]={0}; // percorso iniziale
const int min=1; 
const int max=10;
const int step=10; // inserisco 10 passi per semplicità 

int MossaTartaruga(int *ptrT);
int MossaLepre(int *ptrL);
void aggiornaTabellone(int T, int L);

int main(){
    int *ptrT;
    int *ptrL;
    int T=1,L=1;
    int counter=1;
    
   srand(time(NULL)); //inizializzazione per generare i numeri causali

   printf("Inzio gara Tartaruga contro Lepre:\nBANG!!!\n");
   printf("Animale    Percentuale probabilita' mossa    Mossa effettiva\n");


    while (T<=step && L<=step){
        printf("giro numero: %d\n",counter);
        printf("Tartaruga   ");
        T=MossaTartaruga(&T);
        printf("Lepre   ");
        L=MossaLepre(&L);
        aggiornaTabellone(T,L);

         if(L==T)
            printf("OUCH!!! (La tartaruga ha morso la lepre!)\n");

            counter++;
        }
    if(L>T){
        printf("La lepre ha vinto!");
    }else if (L<T){
        printf("La tartaruga ha vinto!");
    }else if(L==T){
        printf("pareggio!");
    }

    return 0;
        
}

int MossaTartaruga(int *ptrT){
    int avanti;
    avanti=min+(rand()%max-min+1);
    if(avanti>= 1 && avanti<=5 ){
        printf("Passo veloce\t50%%\tTre quadrati avanti");
        *ptrT=*ptrT+3;
    }else if (avanti==6|| avanti==7)
    {
        printf("Scivolata\t20%%\tSei quadrati indietro");
        *ptrT=*ptrT-6;
    }else if (avanti>= 8 && avanti<=10)
    {
        printf("Passo lento\t30%%\tUn quadrato avanti");
        *ptrT=*ptrT+1;
    }
    if (*ptrT < 1)
        *ptrT = 1;

    printf("\n");
    return *ptrT;
}

int MossaLepre(int *ptrL){
    int avanti;
    avanti=min+(rand()%max-min+1);
    if (avanti>= 1 && avanti<=2)
    {
        printf("Riposo\t20%%\tNessuna mossa");
    }else if(avanti>= 3 && avanti<=4 ){
        printf("Grande balzo\t20%%\tNove caselle avanti");
        *ptrL=*ptrL+9;
    }else if (avanti==5)
    {
        printf("Grande scivolata\t10%%\tDodici caselle indietro");
        *ptrL=*ptrL-12;
    }else if (avanti>= 6 && avanti<=8)
    {
        printf("Piccolo balzo\t 20%%\tUna casella avanti");
        *ptrL=*ptrL+1;
    }else if(avanti==9|| avanti==10)
    {
        printf("Piccola scivolata\t20%%\tDue caselle indietro");
        *ptrL=*ptrL-2;
    }    
     if (*ptrL < 1) 
        *ptrL = 1;
    
    printf("\n");
return *ptrL;
}

void aggiornaTabellone(int T,int L){

    
    for(int i=0;i<step;i++){
        if(T==i)
        printf("T");
        else
        printf("[]");

    }
    printf("\n");
    for(int i=0;i<step;i++){
        if(L==i)
        printf("L");
        else
        printf("[]");

    }
    printf("\n");
    for(int i=1;i<=step;i++){
        printf("%d ",i);
    }
    printf("\n");
}