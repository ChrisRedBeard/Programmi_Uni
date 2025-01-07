/*
ES 2.16 

(Aritmetica) Scrivete un programma che chieda all’utente di inserire due numeri, che li 
legga e ne stampi la somma, il prodotto, la differenza, il quoziente e il resto.
*/

#include <stdio.h>

int main (void){
  
  int a,b;

  printf("\ninserisci il primo numero: ");
  scanf("%d",&a);

  printf("\ninserisci il secondo numero: ");
  scanf("%d",&b);

 printf("\nsomma:%d, prodotto: %d, differenza:%d, quoziente: %d, resto %d ",(a+b),(a*b),(a-b),(a/b),(a%b));

    return 0;
}