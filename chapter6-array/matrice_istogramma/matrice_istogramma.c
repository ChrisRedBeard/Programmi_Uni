/*questo programma stampa un istogramma attraverso una matrice di caratteri*/

#include <stdio.h>

#define SIZE 3

void print_histogram(int []);

int main(){
    int arr[SIZE]={4,6,1};
    print_histogram(arr);

    return 0;

}

void print_histogram(int arr[]){


 char histogram[30][30]={' '};
 /* la funzione sizeof() restituisce la lungehzza in byte, quindi per trovare il numero di righe/colonne
   quindi dobbiamo eseguire l'operazione sottostante per ricavare righe e colonne: */
 int righe=sizeof(histogram)/sizeof(histogram[0]); 
 int colonne=sizeof(histogram[0])/sizeof(histogram[0][0]);

 int count=3 ;//contatore necessario alla posizione
 

 int lunghezza = SIZE;

  printf("lunghezza: %d ",lunghezza);

 printf(" righe: %d e colonne: %d ",righe,colonne);

 
 //Imposto questi valori fissi nella matrice di caratteri
 histogram[0][0]='^';
 histogram[0][1]=' ';
 histogram[(righe - 1)][0]='+';
 histogram[righe-1][colonne-2]='>';

//stampo
//printf("\n%c",histogram[0][0]);
    // Initialize histogram with spaces






 //stampo il bordo sinistro
 for (size_t i = 1; i < righe-1; i++){ 
     histogram[i][0]='|';
    for (size_t j = 1; j < colonne-2; j++){
      histogram[i][j]=' ';
     // printf("%c",histogram[i][j]);
    }
  
  }

//stampo il bordo inferiore
  for(size_t j=1;j<colonne-2;j++){
    if((j%2)==0){
       histogram[righe-1][j]='_';
    }else{
         histogram[righe-1][j]=' ';
    }

     //printf("%c",histogram[righe-1][j]);
  }
  
  //stampa delle righe verticali con gli asterischi
  for (size_t t = 0; t < lunghezza; t++)
  {
     if(arr[t]>0){
      for(size_t i=((righe-1)-arr[t]);i<righe-1;i++){

          histogram[i][count]='*';
      }
      count=count+3;
   }
  }

//stamp dell'intera matrice 
printf("\nstampa matrice:\n\n");
  for (int r = 0; r < righe; r++)
  {
    for (int c = 0; c < colonne; c++)
    {
     printf("%c",histogram[r][c]);
     fflush(stdout);
    }
    printf("\n");
    
  }
    
    char num_string[3];
    printf(" ");
    for(size_t j=0;j<lunghezza;j++){
     /*
      char appoggio=arr[j] + '0';
         printf(" %c ",appoggio);
     */
      sprintf(num_string,"%d",arr[j]);
      printf(" %s ",num_string);
     
    

     //printf("%c",histogram[righe-1][j]);
  }
     
  
}