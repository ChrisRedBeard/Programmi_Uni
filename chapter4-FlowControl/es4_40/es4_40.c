/*
ES 4.40 (Crescita della popolazione mondiale) 

La popolazione mondiale è considerevolmente aumentata nel corso dei secoli. 
La crescita continua potrebbe alla fine sfidare i limiti di aria 
respirabile, di acqua potabile, di colture arabili e di altre risorse limitate.
È evidente che negli ultimi anni la crescita è rallentata e che la popolazione mondiale potrebbe qualche volta 
raggiungere il picco massimo in questo secolo per poi iniziare a calare.
 Per questo esercizio ricercate on-line articoli sull’aumento della popolazione mondiale.
 Assicuratevi di prendere in esame vari punti di vista. Ottenete stime per l’attuale popolazione 
mondiale e il suo tasso di crescita (la percentuale con cui è probabile che aumenti quest’an
no). Scrivete un programma che calcoli la crescita della popolazione mondiale ogni anno per 
i prossimi 75 anni, usando l’assunto che il tasso della crescita attuale resterà costante. 
Stampate i risultati in una tabella. La prima colonna dovrebbe visualizzare l’anno (dall’anno 
1 all’anno 75), la seconda la popolazione mondiale prevista per la fine di quell’anno, e la 
terza l’aumento numerico nella popolazione mondiale che si verificherebbe quell’anno. 
Usando i vostri risultati, determinate l’anno in cui la popolazione sarebbe il doppio di oggi, 
qualora continuasse il tasso di crescita di quest’anno.

*/


#include <stdio.h>

#include<stdlib.h>



#define anni 75

int main(void){

   unsigned long long popolazione=8000000000;
  unsigned long long popoIniz=8000000000;

    //percentuale di crescita 
    float percCrescita=1.1;
    //numero effettivo
    float crescita=(popolazione*percCrescita)/100;

    int annoX=2024;
    int trovato=0;

    for (size_t i = 0; i < anni; i++)
    {
        printf("%d\t%.2f\t+%.2f\n",(2024+i),(popolazione+crescita),(crescita));
        popolazione=popolazione+crescita;
        crescita=(popolazione*percCrescita)/100;
        if(popolazione>=(popoIniz*2) && !trovato){
            annoX=i+2024;
            trovato=1;
        }
    }
    
    printf("\nLa popolazione sarà il doppio di oggi nel %d\n",annoX);



    



    return 0;
}