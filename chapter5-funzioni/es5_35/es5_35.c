/*


ES 5.35
 (Fibonacci)
 La serie di Fibonacci
 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
 inizia con i termini 0 e 1 e ha la proprietà che ogni termine che segue è la somma dei due 
termini precedenti.  a) Scrivete una funzione fibonacci(n) non ricorsiva che calcoli l’nmo 
numero di Fibonacci. Usate unsigned int per il tipo del parametro della funzione e unsi
gned long long int per il suo tipo di ritorno. b) Determinate il numero di Fibonacci più 
grande che può essere stampato sul vostro sistema.

*/



#include <stdio.h>
#include <math.h>

 
unsigned long long int fibonacci(int);

int main(void){

   for (size_t i = 0; i < 20; i++)
   {
     printf("\nil num di fibonacci con %d è: %lld",i,fibonacci(i));
   }
   
  
  


    return 0;
}


unsigned long long int fibonacci(int n){

  long long int result;

  result=(1/(sqrt(5)))*((pow((1+sqrt(5))/2,n))-(pow((1-sqrt(5))/2,n)));
   

  return result;

}



