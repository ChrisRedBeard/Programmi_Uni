#include <stdio.h>
#include <stdlib.h>

#define size 8 
        //puntatore di funzione
void bubbleSort(int[],int (*) (int,int));


int crescente(int,int);

int decrescente(int,int);

void scambia(int*,int*);

void stampaVet(int[]);

int main(){

    int scelta;

    int vet[size]={4,7,18,10,2,1,28,5};
     
     stampaVet(vet);



    return 0;
}


void scambia(int* numA,int* numB){

    int temp;

    temp=*numA;
    *numA=*numB;
    *numB=temp;
}

int crescente(int c, int d){

    return c > d;
}

int decrescente(int c, int d){

    return c < d;
}

void bubbleSort(int numeri[],int (*funzione) (int,int)){

 void swap(int*,int*);

 for (int  i = 0; i < size; i++)
 {
    for (size_t j = 0; j < size-1; j++)
    {
        /* code */
    }
    
 }
 


}


void stampaVet(int vet[]){
     printf("{");
    for (size_t i = 0; i < (size-1); i++)
    {
       printf(" %d ,",vet[i]);
    }
    printf(" %d ",vet[size-1]);
    printf("}");
    
}