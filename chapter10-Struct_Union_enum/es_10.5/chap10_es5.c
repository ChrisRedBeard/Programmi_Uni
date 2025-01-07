/*Fornite la definizione per ognuna delle seguenti strutture e unioni. 
a) 
La struttura inventory contenente l’array di caratteri partName[30], l’intero partNum
ber, il membro price in virgola mobile, l’intero stock e l’intero reorder.
 b) L’unione data contenente char c, short s, long b, float f e double d.
 c) 
Una struttura chiamata address contenente gli array di caratteri streetAddress[25], 
city[20], state[3] e zipCode[6].
 d) La struttura student contenente gli array firstName[15] e lastName[15] e la varia
bile homeAddress di tipo struct address della voce c).
 e) 
La struttura test contenente 16 campi di bit con larghezze di 1 bit. I nomi dei campi 
di bit sono le lettere da a a p
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct{
    char partName[30];
    int partNumber;
    int stock;
    int reorder;
}
inventory;


union{
    char c;
    short s;
    long b; 
    float f;
    double d;
};

typedef struct{
    char streetAddress[25];
    char city[20];
    char state[3];
    char zipCode[6];
}address;

typedef struct{
    char firstName[15];
    char lastname[15];
    address homeAddress;
}student;

typedef struct{
     unsigned a:1;
     unsigned b:1;
     unsigned c:1;
     unsigned d:1;
     unsigned e:1;
     unsigned f:1;
     unsigned g:1;
     unsigned h:1;
     unsigned i:1;
     unsigned j:1;
     unsigned k:1;
     unsigned l:1;
     unsigned m:1;
     unsigned n:1;
     unsigned o:1;
     unsigned p:1;

}test;


