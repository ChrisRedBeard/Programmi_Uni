#include <stdio.h>      
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h> 

//definiamo la struttura HealthProfile con i suoi attributi
typedef struct {
    int giorno;
    int mese;
    int anno;
    char nome[30];
    char cognome[30];
    char sesso;
    float peso; 
    float altezza;
    int eta;
}HealthProfile;

float BMI(float,float);  //funzione per il calcolo del BMI
//ricordarsi di mettere il testo colorato in base alla condizione
float BMI(float peso,float altezza){
    float indicatore=peso/pow(altezza,2);
    printf("Condizione:");
    
    if(indicatore<16){          //indichiamo la condizione del paziente
        printf("grave magrezza");
    }else if((indicatore>=16)&&(indicatore<17)){
        printf("visibilmente sottopeso");
    }else if((indicatore>=17)&&(indicatore<18.5)){
        printf("leggermente sottopeso");
    }else if((indicatore>=18.5)&&(indicatore<25)){
        printf("peso ideale");
    }else if((indicatore>=25)&&(indicatore<30)){
        printf("sovrappeso");
    }else if((indicatore>=30)&&(indicatore<35)){
        printf("obesita' di I classe");
    }else if((indicatore>=35)&&(indicatore<40)){
        printf("obesita' di II classe");
    }else if(indicatore>=40){
        printf("obesita' di III classe");
    }
    return indicatore;
}


int heartRate(HealthProfile);


int heartRate(HealthProfile pazienti){
    return 220-pazienti.eta;
    
}
//calcola l'età del paziente 
int age(HealthProfile pazienti) {
    time_t t = time(NULL);  //struct che prende la data corrente 
    struct tm tm = *localtime(&t);
    pazienti.eta = (tm.tm_year + 1900)-pazienti.anno-1;
    if((pazienti.giorno<=tm.tm_mday)&&(pazienti.mese<=(tm.tm_mon+1))){  //se il giorno e il mese di nascita(compleanno)sono passati allora l'età corrisponde all' anno corrente
        pazienti.eta = (tm.tm_year + 1900)-pazienti.anno;
  }

  return pazienti.eta;
  }

int main(){ 

time_t t = time(NULL);
struct tm tm = *localtime(&t); //struct che prende la data corrente 

printf("Data corrente: %d/%d/%d\n",tm.tm_mday,(tm.tm_mon+1),(tm.tm_year+1900)); 

//dichiarazione e inizializzazione di una istanza dela struct HealthProfile 
/*HealthProfile p={
    21, //giorno
    5, //mese
    2005, //anno
    "Mario", //nome
    "Rossi", //, //cognome
    'M', //sesso
    89.90, // peso
    1.80 //altezza
};*/

int numpazienti=0;
printf("inserisci numero di pazienti:");
scanf("%d",&numpazienti);
 HealthProfile* pazienti = (int*)malloc(numpazienti* sizeof(HealthProfile));
    if (pazienti == NULL) {
        printf("Errore nell'allocazione della memoria!\n");
        return 1;
    }

//vettore di pazienti 
for(int i=0;i<numpazienti;i++){
    printf("\nPaziente n.%d\n",i+1);
    printf("giorno: ");
    scanf("%d",&pazienti[i].giorno);
    printf("mese: ");
    scanf("%d",&pazienti[i].mese);
    printf("anno: ");
    scanf("%d",&pazienti[i].anno);
    printf("nome: ");
    scanf("%s",&pazienti[i].nome);
    printf("cognome: ");
    scanf("%s",&pazienti[i].cognome);
    printf("sesso:");
    //qui inserisco un fflush perchè si blocca l'input per il sesso
    fflush(stdin);
    scanf("%c",&pazienti[i].sesso);
    printf("peso: ");
    scanf("%f",&pazienti[i].peso);
    printf("altezza: ");
    scanf("%f",&pazienti[i].altezza);
    }

    printf("\n creazione cartelle cliniche:\n\n");

    for(int i=0;i<numpazienti;i++){
        printf("Paziente n.%d:\n%s %s \neta':%d\n",i+1,pazienti[i].nome,pazienti[i].cognome,age(pazienti[i]));
        pazienti[i].eta=age(pazienti[i]);
        printf(" con BMI di: %0.2f\n",BMI(pazienti[i].peso,pazienti[i].altezza));
        printf("La frequenza cardiaca massima e': %d\nCon frequenza cardiaca normale che va da %.0f a %.0f\n\n",heartRate(pazienti[i]),(double)heartRate(pazienti[i])*0.5,(double)heartRate(pazienti[i])*0.8); 
        printf("\n");
    }
    
    
  printf("\n");
  return 0;
}