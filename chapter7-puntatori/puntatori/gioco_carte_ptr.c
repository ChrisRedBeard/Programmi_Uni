#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define facce 13
#define semi 4
#define carte 52


const char *suit[semi]={"Cuori","Fiori","Quadri","Picche"};
const char *valori[facce]={"Asso","Due","Tre","Quattro","Cinque","Sei","Sette","Otto","Nove","Dieci","Jack","Queen","King"};


void mischia(unsigned int[][facce]);


void stampaMatrice(unsigned int[][facce]);

void distribuisci(unsigned int[][facce]);


int main(){


  srand(time(NULL));
  

    unsigned int mazzo[semi][facce]={0};

    printf("\nMatrice iniziale :\n");

    stampaMatrice(mazzo);

    mischia(mazzo);


    return 0;
}


void mischia(unsigned int mazzo[semi][facce]){
 
    int riga=0;
    int colonna=0;

    int counter=1;

    int contCasuale=1;

     while (contCasuale<53)
     {
         riga= rand()%semi;
         colonna= rand()%facce;

        if(mazzo[riga][colonna]==0){
            mazzo[riga][colonna]=contCasuale; 
            contCasuale++;
        }
     }
     
     distribuisci(mazzo);
    
     printf("\nMatrice mischiata:\n");
     
     stampaMatrice(mazzo);

     printf("\n");
    
    printf("\nCarte corrispondenti:\n");

    for (size_t m = 0; m < carte; m++)
    {
     for (int i = 0; i < semi; i++)
       {
         for (int k = 0; k < facce; k++)
        {
          if(mazzo[i][k]==counter){
            printf("%s di %s\n",valori[k],suit[i]);
            counter++;
          }else{
            continue;
          }
  
        }
    
      }
    }
    
}


void stampaMatrice(unsigned int matrice[][facce]){

    for (int i = 0; i < semi; i++)
    {
        for (int k = 0; k < facce; k++)
        {
            printf(" %u ",matrice[i][k]);  
    
        }
        printf("\n");  
   } 

}


void distribuisci(unsigned int matrice[][facce]){


    for (size_t i = 0; i < semi; i++)
    {
        for (size_t j = 0; j < facce; j++)
      {
        printf("%s di %s",valori[j],suit[i]);
           printf("\n");
      }
       
    }
    

}