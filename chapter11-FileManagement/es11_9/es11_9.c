/*
 ES 11.3 + ES 11.8 + ES 11.9
*/


typedef struct{
 int numAccount;
 char nome[15];
 char cognome[15]; 
 double saldo;
}Cliente;


#include <stdio.h>
#include <stdbool.h>


int main(void){

    Cliente c;
    double saldoUpd;
    int numConto;
    
    bool notFound;
    
    FILE *ofPtr; //vecchie transazioni

    FILE *tfPtr; // transazioni correnti

    FILE *nfPtr; // transazioni nuove


/*a) Scrivete un’istruzione che apra il file "oldmast.dat" per la lettura e assegni a ofPtr il puntatore a file restituito.
  b) Scrivete un’istruzione che apra il file "trans.dat" per la lettura e assegni a tfPtr il puntatore a file restituito.
  c) Scrivete un’istruzione che apra il file "newmast.dat" per la scrittura (e la creazione)
    e assegni a nfPtr il puntatore a file restituito.
  */
     //  fopen apre il file per la scrittura
      if ((ofPtr=fopen("oldmast.dat","r")) == NULL || (tfPtr=fopen("trans.dat","r")) == NULL || (nfPtr=fopen("newmast.dat","w")) == NULL  ) {
        printf("\nUno di questi file non può essere aperto!\n");
     }
      else {
        
        while (!feof(ofPtr)) //ripeti finchè
        {
          //lettura dal file "oldmast.dat"
          fscanf(ofPtr,"%d %15s %15s %lf", &c.numAccount, &c.nome,&c.cognome,&c.saldo);
  
            notFound=true;
            while (!feof(tfPtr))
            {
              //lettura dal file 'trans.dat'
              fscanf(tfPtr, "%d %lf", &numConto, &saldoUpd);
              //printf("\nnumAccount: %d saldo: %lf\n",numConto,saldoUpd);


                if (numConto==c.numAccount)
                {
                  notFound=false;
                // printf("\n%d %s %s %lf\n", c.numAccount, c.nome, c.cognome,c.saldo);
                  fprintf(nfPtr,"%d %s %s %lf\n",c.numAccount, c.nome, c.cognome,(c.saldo+saldoUpd));
                  break;
                }
    
            }
            
            if(notFound){
            // printf("\nUnmatched transaction record for account number %d\n",numConto);
              fprintf(nfPtr,"%d %s %s %lf\n",c.numAccount, c.nome, c.cognome,(c.saldo));

            }
        }
        fclose(nfPtr); // chiusura del file "newmast.dat"
        printf("\nFile aggiornato con successo! \n");
            
        printf("\n///////////////////////////////////////////////////////////////\n");    
        
        rewind(tfPtr);
        rewind(ofPtr);

          while (!feof(tfPtr)) //ripeti finchè
        {
          //lettura dal file 'trans.dat'
              fscanf(tfPtr, "%d %lf", &numConto, &saldoUpd);
              //printf("\nnumAccount: %d saldo: %lf\n",numConto,saldoUpd);

            notFound=true;
            while (!feof(ofPtr))
            {
              
          //lettura dal file "oldmast.dat"
                fscanf(ofPtr,"%d %15s %15s %lf", &c.numAccount, &c.nome,&c.cognome,&c.saldo);

                if (numConto==c.numAccount)
                {
                  notFound=false;
                  break;
                }
    
            }
            
            if(notFound){
              printf("\nUnmatched transaction record for account number %d\n",numConto);

            }
        }

        printf("\n///////////////////////////////////////////////////////////////\n");

       }


  fclose(ofPtr); // chiusura del file "oldmast.dat"
  fclose(tfPtr); // chiusura del file "trans.dat"
    return 0;
}