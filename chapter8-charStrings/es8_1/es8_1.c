#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define size 100

int main(void){


   char c='a';
   int x,y,z;
   double d,e,f;
   char *ptr;
   char s1[size];
   char s2[size];
  // a)Convertite il carattere memorizzato nella variabile c in una lettera maiuscola.
  //Assegnate il risultato alla variabile c.
    printf("%c",toupper(c));

/*
 b) Determinate se il valore della variabile c è una cifra. Usate l’operatore condizionale 
come mostrato nelle Figure 8.2–8.4 per stampare " is a " o " is not a " quando 
il risultato viene stampato.
*/
   if(isdigit(c)){
    printf("\nis a digit: %d",c);
   }else{
      printf("\nis not a digit");
   }

/* c) 
Determinate se il valore della variabile c è un carattere di controllo.
Usate l’operatore condizionale per stampare " is a " o " is not a " quando viene stampato il risultato. */
    if(iscntrl(c)){
    printf("\nis a control char: %c",c);
   }else{
      printf("\nis not a control char");
   }

/*d) Leggete una riga di testo dalla tastiera e memorizzatelo nell’array s1. Non usate scanf.*/
   fgets(s1,size,stdin);
/**
 * e) 
Stampate la riga di testo memorizzata nell’array s1. Non usate printf.
 */
   puts(s1);
/**
 *  f) 
Assegnate a ptr l’indirizzo dell’ultima occorrenza di c in s1.
 */
   ptr=strchr(s1,c);

/**
 * g) Stampate il valore della variabile c. Non usare printf.
 */
   putchar("%c",&c); 

/**
 * h) Determinate se il valore di c è una lettera. Usate l’operatore condizionale per stampare 
" is a " o " is not a " quando viene stampato il risultato. */
     if(isalpha(c)){
    printf("\nis a control char: %c",c);
   }else{
      printf("\nis not a letter");
   }
/**
 *  i) Leggete un carattere dalla tastiera e memorizzatelo nella variabile c.
 */
scanf("%c",&c);

// j) Assegnate a ptr la locazione della prima occorrenza di s2 in s1.
ptr=strstr(s1,s2);

/* k)
Determinate se il valore della variabile c è un carattere stampabile. Usate l’operatore con
dizionale per stampare " is a " o " is not a " quando viene stampato il risultato.*/
    if(isprint(c)){
    printf("\nis a printable char: %c",c);
   }else{
      printf("\nis not a printable char");
   }

/*
  l) 
Leggete tre valori double dalla stringa "1.27 10.3 9.432" e memorizzateli nelle 
variabili d, e e f.
*/
sscanf("1.27 10.3 9.432","%f%f%f",&d,&e,&f);

/*
m) Copiate la stringa memorizzata nell’array s2 nell’array s1.
*/
strcpy(s1, s2); 

/*
n) Assegnate a ptr la locazione della prima occorrenza di un carattere di s2 in s1.*/ 
ptr = strchr(s1, c); 

/*
o) Confrontate la stringa in s1 con la stringa in s2. Stampate il risultato.
*/
printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2));

/*
p) Assegnate a ptr la locazione della prima occorrenza di c in s1.
*/
ptr=strchr(s1,c);

/*
 q) Usate sprintf per memorizzare la stampa dei valori delle variabili intere x, y e z 
nell’array s1. Ogni valore va stampato con un’ampiezza di campo uguale a 7
*/
sprintf(s1, "%7d%7d%7d", x, y, z); 

/**
 * r) Aggiungete 10 caratteri della stringa in s2 in coda alla stringa in s1.
 */
 strncat(s1,s2,10);

/*
 s) Determinate la lunghezza della stringa in s1. Stampate il risultato.
*/
 printf("strlen(s1) = %u\n", strlen(s1)); 

/*
 t) Assegnate a ptr la locazione del primo token in s2. I token nella stringa s2 sono sepa
rati da virgole (,).
*/
ptr = strtok(s2, ",");

    return 0;

}