
 /*
 ES 9.17 
 (Uso di %g con varie precisioni) 
 Scrivete un programma che usi lo specificatore di conversione g per stampare il valore 9876.12345.
 Stampate il valore con precisioni nell’intervallo da 1 a 9.
*/


#include <stdio.h>

int main(void)
{
    
    float num=9876.12345;

    printf("\nIl valore è: %.1g",num);
    printf("\nIl valore è: %.2g",num);
    printf("\nIl valore è: %.3g",num);
    printf("\nIl valore è: %.4g",num);
    printf("\nIl valore è: %.5g",num);
    printf("\nIl valore è: %.6g",num);
    printf("\nIl valore è: %.7g",num);
    printf("\nIl valore è: %.8g",num);
    printf("\nIl valore è: %.9g",num);



    for (int i = 1; i <= 9; i++) {
        //stampa  a precisione variabile
        printf("\nIl valore è: %.*g",i,num); 
    }
    return 0;
}

