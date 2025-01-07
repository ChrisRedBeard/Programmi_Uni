/*

ES 4.33 (Numerali romani equivalenti di valori decimali) 
Scrivete un programma che stampi una tabella dei numerali romani 
equivalenti dei numeri decimali nell’intervallo da 1 a 100.
 I = 1
 V = 5
 X = 10
 L = 50
 C=100
 IV=4
 IX=9
 XL=40
*/



#include <stdio.h>


void stampaUnit(int);

void stampaDecine(int);

int main(void){
   
   
   
   int num;
   int decine,unita;

    printf("\ninserisci un numero compreso tra 1 e 100:\n");
    scanf("%d",&num);

    while((num<1 || num>100)){
     printf("\ninserisci un numero compreso tra 1 e 100:\n");
     scanf("%d",&num);
    };

    decine=num/10;
    unita=num%10;
    stampaDecine(decine);
    stampaUnit(unita);

    


    return 0;
}



void stampaUnit(int num){
 if(num>=1 && num<=3){
    for (size_t i = 0; i < num; i++)
    {
         printf("I");
    }
    
   }
   if(num==4){
    printf("I");
    printf("V");
    }
   if(num>=5 && num<=8){
    printf("V");
    for (size_t i = 0; i < (num%5); i++)
    {
        printf("I");
    }
   }
   if(num==9){
       printf("IX");
   }
}

void stampaDecine(int num){


  if(num>=1 && num<=3){

    for (size_t i = 0; i < num; i++)
    {
        printf("X");
    }
    
  }
  if(num==4){
    printf("XL");
  }
  if(num>=5 && num<=8){
   printf("L");
    for (size_t i = 0; i < (num%5); i++)
    {
        printf("X");
    }
   }
     if(num==9){
       printf("XC");
   }
   if (num==10)
   {
    printf("C");
   }
}