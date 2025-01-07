/*
NOME: Christian Savino
COGNOME: Barbarossa
CLASSE: 3AI
DATA: 28/01/2022

Traccia: Scrivere un programma che permetta di inserire un vettore e lo ordina
  tramite i 2 metodi : ripple-sort e bubble-sort
*/
class Main {

//funzione per ordinare il vettore per selezione
public static int[] rippleSort(int vet[]){
  int cont =0;
  for (int i = 0; i < vet.length - 1; i++) {
        int iMin = i;
    
        for (int j = i + 1; j < vet.length; j++)
          if (vet[iMin] > vet[j])
            iMin = j;
        if (i != iMin) {
          int temp = vet[iMin];
          vet[iMin] = vet[i];
          vet[i] = temp;

        }
       cont=cont+1;

      }
       System.out.println("\nQuesto è il numero di cicli eseguiti dall'ordinamento per selezione: "+(cont+1)+" ");

return vet;
}
 


//funzione per ordinare il vettore per scambio
public static int [] bubbleSort(int vet[]){
   boolean scambio;
   int cont=0;
    int sup = vet.length - 1;
    do {
      scambio = false;
      for (int i = 0; i < sup; i++) {
        int temp;

        if (vet[i] > vet[i + 1]) {
          temp = vet[i];
          vet[i] = vet[i+1];
          vet[i+1] = temp;
          scambio = true;
        }
          cont=cont+1;
      }
      sup = sup - 1;
     System.out.println("\nQuesto è il numero di cicli eseguiti dall'ordinamento per scambio : "+cont+" ");
    } while (scambio);
    return vet;
}



//funzione per stampare il vettore
public static void stampaVet(int vet[]){
  for(int i=0;i<vet.length;i++){
    System.out.print(vet[i]+" ");
  }
}

//funzione per la ricerca nel vettore che restituisce il vettore di posizioni in cui trova il valore uguale
public static int[] cerca(int vet3[],int nDaCercare){
int indici[]=new int[1];
int c=0;
 for(int i=0;i<vet3.length;i++){
   if(vet3[i]==nDaCercare){

     indici[c]=(i+1); // Salvo la posizione dell'elemento trovato
     c++;            // contatore
     indici=Myfunction.aggiungiElemento(indici); //aggiungo un elemento al vettore
   }
 }
return indici;
}

// Ricerca dicotomica 
public static boolean ricDicotomica(int scambio[],int nDaCercare){
 boolean trovato=false;
 int inf=0;
 int sup=(scambio.length-1);
 int lunghezza=Myfunction.log2(scambio);
 for(int i=0;i<lunghezza;i++){
    if(scambio[(inf+sup)/2]==nDaCercare){
      trovato= true;
    }else if(nDaCercare<scambio[(inf+sup)/2]){
      sup=(((inf+sup)/2)-1);

    }else{ 
      inf=(((inf+sup)/2)+1);
    }
 }
 return trovato;
}

public static void main(String[] args) {
int indici[];
boolean trovato=true;
int scambio []=new int[99];
  String domanda2="Inserisci i numeri del vettore separati da \"-\"\n ↓ ↓ ↓";
 int vet [] = Myfunction.readIntVet(Myfunction.readString(domanda2));
 String domanda1="\n\nScegli un opzione:\n-1 Ordina il vettore per selezione e scambio\n-2 Per cercare un numero all'interno del vettore\n-3 Per la ricerca dicotomica\n-4 Per uscire dal programma\nInserisci: ";
 String domanda3="\nInserisci il numero da cercare nel vettore :  ";
 String visualizza="\nVuoi visulizzare quante volte si ripete l'elemento ricercato?  (Si = 1  No=0) ";
 int ripeti; // serve per visualizzare quante volte il numero ricercato si ripete all'interno del vettore
 int scelta; 
 int nDaCercare=0;
 boolean ordinato=false;
 boolean ricerca=false;
  do{
    ordinato=false;
    scelta = Myfunction.readInteger(domanda1);
      switch(scelta){
          case 1:  int vet2 [] = rippleSort(vet);
                    stampaVet(vet2);

                    scambio = bubbleSort(vet);
                    stampaVet(scambio);
                    ordinato=true;
                    ricerca=true;
                    break;

          case 2 :      if(ordinato==false){
                          System.out.println("\nRICERCA NEL VETTORE DISORDINATO");
                          nDaCercare = Myfunction.readInteger(domanda3);
                          indici=cerca(vet, nDaCercare);
                            if(indici[0]==0){
                              System.out.println("\n-- Valore inesistente! --");
                              break;}
                            else{
                              System.out.println("\nIl numero cercato si trova alla posizione: "+indici[0]);
                              ripeti = Myfunction.readInteger(visualizza);
                                if(ripeti==1){
                                    stampaVet(indici);
                                    break;}
                             }
                            }else{
                            System.out.println("\nRICERCA NEL VETTORE ORDINATO");
                            nDaCercare = Myfunction.readInteger(domanda3);
                            indici=cerca(scambio, nDaCercare);
                            if(indici[0]==0){
                              System.out.println("\n-- Valore inesistente! --");
                              break;}
                            else{
                            stampaVet(indici);
                            ordinato=false;
                            }
                          } 
                        
                         
                          break;
                  
          case 3: if(ricerca){

                    nDaCercare = Myfunction.readInteger(domanda3);
                    trovato = ricDicotomica(scambio, nDaCercare);
                      if (trovato){
                        System.out.println("\n-- Il valore esiste! --");
                      }else{
                        System.out.println("\n-- Valore inesistente! --");

                      }

                   }else{System.out.println("Devi prima ordinare il vettore!!");
             
                   }



           default: break;

    }
    
   }while(scelta<4);
}     
}