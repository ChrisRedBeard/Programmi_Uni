
/*
 Riscrivete il programma della Figura 6.22 per usare un’interfaccia guidata da menu.
 Il programma deve offrire all’utente quattro opzioni, come segue:
 Enter a choice:
  0  Print the array of grades
  1  Find the minimum grade
  2  Find the maximum grade
  3  Print the average on all tests for each student
  4  End program
 Una restrizione all’uso di array di puntatori a funzioni è costituita dal fatto che tutti i punta
tori devono avere lo stesso tipo. I puntatori devono puntare a funzioni che restituiscono dati 
dello stesso tipo e che ricevono argomenti dello stesso tipo. Per questa ragione, le funzioni 
nella Figura 6.22 devono essere modificate, in modo che ognuna restituisca lo stesso tipo di 
dato e riceva gli stessi parametri.

Modificate le funzioni minimum e maximum in modo che 
stampino il valore minimo o massimo e non restituiscano niente. Per l’opzione 3,
modificate la funzione average della Figura 6.22 per inviare in uscita la media per ogni studente (non 
per uno studente specifico). La funzione average non deve restituire niente e deve ricevere 
gli stessi parametri di printArray, mimimum e maximum.
Memorizzate i puntatori alle quattro funzioni nell’array processGrades e usate la scelta fatta dall’utente come indice dell’ar
ray per chiamare ogni funzione.
*/



#include <stdio.h>
   #define STUDENTS 3
   #define EXAMS 4
   #define functions 4

  
  // prototipi di funzioni
   void minimum(const int grades[][EXAMS]);
  void maximum(const int grades[][EXAMS]);
   void average(const int grades[][EXAMS]);
   void printArray(const int grades[][EXAMS]);  
// la funzione main inizia l'esecuzione del programma
  int main(void)
   {


    
      // inizializza i voti per i tre studenti (righe)
     int studentGrades[STUDENTS][EXAMS] =  
        { { 77, 68, 86, 73 },
          { 96, 87, 89, 78 },
         { 70, 90, 86, 81 } };

    void (*funzioni[functions])(const int grades[][EXAMS])={printArray,minimum,maximum,average};
    printf("\nEnter a choice:\n0  Print the array of grades\n1  Find the minimum grade\n2  Find the maximum grade\n3  Print the average on all tests for each student\n4  End program\ninsert: ");
     int choice=0;
     scanf("%d",&choice);
     switch (choice)
     {
     case 0:
     // invoca la funzione alla locazione choice nell'array f e passa
       // choice come argomento
        (*funzioni[choice])(studentGrades);
        break;
     case 1:
            (*funzioni[choice])(studentGrades);
        break;
     case 2:
            (*funzioni[choice])(studentGrades);
        break;
     case 3:
        (*funzioni[choice])(studentGrades);
        break;
     case 4:
            return 0;
        break;

     
     default:
        break;
     }
      
   }
   
  // Trova il voto minimo
   void minimum(const int grades[][EXAMS])
  {
      int lowGrade = 100; //  voto più alto possibile
  
    // ciclo per le righe di grades
    for (size_t i = 0; i < STUDENTS; ++i) {
  
        // ciclo per le colonne di grades
       for (size_t j = 0; j < EXAMS; ++j) {
  
          if (grades[i][j] < lowGrade) {
             lowGrade = grades[i][j];
           }
        }
     }
   
    printf("\nHighest grade: %d",lowGrade); // restituisci il voto minimo 
   } 
 
  // Trova il voto massimo
  void maximum(const int grades[][EXAMS])
  {
    int highGrade = 0; // voto più basso possibile
 
     // ciclo per le righe di grades
    for (size_t i = 0; i < STUDENTS; ++i) {
  
        // ciclo per le colonne di grades
        for (size_t j = 0; j < EXAMS; ++j) {
   
         if (grades[i][j] > highGrade) {
               highGrade = grades[i][j];
            } 

        }
     }
  
    printf("\nLowest grade: %d",highGrade); // restituisci il voto massimo
  } 
  
 // Determina il voto medio per ogni studente           
  void average(const int grades[][EXAMS])
 { 
     float total = 0; // somma dei voti degli esami
 
    // totale di tutti i voti per uno studente
    for (size_t i = 0; i < STUDENTS; ++i) {
  
        // ciclo per le colonne di grades
        for (size_t j = 0; j < EXAMS; ++j) {
   
               total = total+grades[i][j];

          }
          printf("\n%d° STUDENT: %f ",(i+1),(total/EXAMS)); // media per ogni studente
          total=0;

     }
  
   
  }
  
  // Stampa l'array
  void printArray(const int grades[][EXAMS])
  {
    // stampa le intestazioni delle colonne
   printf("%s", "                  [0]  [1]  [2]  [3]");
 
   // stampa i voti in formato tabellare
     for (size_t i = 0; i < STUDENTS; ++i) {
  
      // stampa l'etichetta per la riga
       printf("\nstudentGrades[%u] ", i);
 
       // stampa i voti per uno studente
      for (size_t j = 0; j < EXAMS; ++j) {
          printf("%-5d", grades[i][j]);
       } 
    } 
 } 