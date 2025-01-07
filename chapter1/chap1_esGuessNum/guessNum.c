#include <stdio.h>
#include <time.h>

int main(void){
 inizio:
 srand(time(NULL));

 int num;
 int causuale = rand()%20;



 printf("indovina il numero compreso tra 0 e 20: ");
 scanf("%d",&num);

 while(num!=causuale){

   printf("indovina il numero compreso tra 0 e 20: ");
   scanf("%d",&num); 
    
 };

 printf("Hai indovinato il numero! ");
 printf("\nVuoi continuare a giocare? (1=si , 0=no): ");
 int scelta;
 scanf("%d",&scelta);
 if (scelta==1)
 {
    goto inizio;
 }
 


return 0;

}