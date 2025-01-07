/*

 ES 6.10
(Commissioni sulle vendite) 
Usate un array unidimensionale per risolvere il seguente problema.
Una compagnia paga i suoi agenti di vendita su commissione. Gli agenti di vendita 
ricevono $200 alla settimana più il 9% delle loro vendite lorde per quella settimana. Ad 
esempio, un agente di vendita che ottiene un introito lordo sulle vendite di $3000 in una 
settimana riceve $200 più il 9% di $3000, ovvero un totale di $470.
Scrivete un programma in C (usando un array di contatori) che determini quanti agenti di vendita hanno avuto i loro 
guadagni in ognuno dei seguenti intervalli (supponete che il guadagno di ogni agente di 
vendita sia troncato a una quantità intera):
 a) $200–299 2
 b) $300–399 0
 c) $400–499 4
 d) $500–599
 e) $600–699
 f) $700–799
 g) $800–899
 h) $900–999
 i) $1000 e oltre

 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define agenti 20
#define fasce 9

int main(void){
    srand(time(NULL));

 int vetVendite[agenti];
 int vetGuadagni[agenti];
 int contatori[fasce]={0};

  for (size_t i = 0; i < agenti; i++)
  {
    vetVendite[i]=rand()%3000;
  }

  for (size_t i = 0; i < agenti; i++)
  {
    vetGuadagni[i]=200+(vetVendite[i]*0.9);

    if (vetGuadagni[i]>=200 && vetGuadagni[i]<=299)
    {
        contatori[0]=contatori[0]+1;
    }
     if (vetGuadagni[i]>=300 && vetGuadagni[i]<=399)
    {
        contatori[1]=contatori[1]+1;
    }
     if (vetGuadagni[i]>=400 && vetGuadagni[i]<=499)
    {
        contatori[2]=contatori[2]+1;
    }
     if (vetGuadagni[i]>=500 && vetGuadagni[i]<=599)
    {
        contatori[3]=contatori[3]+1;
    }
     if (vetGuadagni[i]>=600 && vetGuadagni[i]<=699)
    {
        contatori[4]=contatori[4]+1;
    }
     if (vetGuadagni[i]>=700 && vetGuadagni[i]<=799)
    {
        contatori[5]=contatori[5]+1;
    }
     if (vetGuadagni[i]>=800 && vetGuadagni[i]<=899)
    {
        contatori[6]=contatori[6]+1;
    }
     if (vetGuadagni[i]>=900 && vetGuadagni[i]<=999)
    {
        contatori[7]=contatori[7]+1;
    }
     if (vetGuadagni[i]>=1000)
    {
        contatori[8]=contatori[8]+1;
    }
  }

  for (size_t i = 0; i < fasce-1; i++)
  {
    printf("\nCi sono %d agenti che hanno guadagnato dai %d a %d",contatori[i],((i*100)+200),((i*100)+299));
  }
  printf("\nCi sono %d agenti che hanno guadagnato dai 1000 e oltre",contatori[fasce-1]);
  
  


    return 0;
}

// 1000= 200 +


