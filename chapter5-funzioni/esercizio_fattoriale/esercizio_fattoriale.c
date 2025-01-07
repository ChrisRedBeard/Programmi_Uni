#include <stdio.h>
#include <stdlib.h>



int fattoriale(int); //definisco la procedura 

long long fattoriale2(int);

int main(void){


    printf("il fattoriale di 5 è: %d",fattoriale2(1000));

    return 0;
}


 int fattoriale(int numero){ 
  if(numero>2){ //CONDIZIONE DI TERMINAZIONE 
     return numero*fattoriale(numero-1);
  }else{
     return numero;
  }
  }
  
  //per rappresentare più cifre
 long long fattoriale2(int numero){ 

  if(numero>2){ //CONDIZIONE DI TERMINAZIONE 
     return numero*fattoriale(numero-1);
  }else{
     return numero;
  }
   

}