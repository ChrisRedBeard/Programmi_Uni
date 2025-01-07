/*
ES 2.32
(Calcolatore dell’indice di massa corporea) Le formule per calcolare l’indice di massa 
corporea (BMI) sono

           weightInPounds × 703
 BMI=    ___________________________
        heightInInches × heightInInches
oppure
          weightInKilograms
 BMI =  ___________________________
        heightInMeters × heightInMeters


Create un’applicazione, che sia un calcolatore di BMI, che legga il peso dell’utente in libbre 
e l’altezza in pollici (o, se preferite, il peso dell’utente in kilogrammi e l’altezza in metri), 
poi calcolate e mostrate l’indice di massa corporea dell’utente.
L’applicazione deve anche mostrare le seguenti informazioni tratte dal Department of Health and Human Services/
 National Institutes of Health, così che l’utente possa valutare il suo BMI:
 VALORI del BMI 
Sottopeso:    meno di 18.5
 Normale:      tra 18.5 e 24.9
 Sovrappeso:   tra 25 e 29.9
 Obeso:        30 o oltre
*/

#include <stdio.h>


int main(void){

// la formula preasa in considerazione tratta il peso in kg e l'altezza in metri

    double peso,altezza;
    printf("\ninserisci il peso in kg: ");
    scanf("%lf",&peso);
     printf("\ninserisci l'altezza in metri : ");
    scanf("%lf",&altezza);

     double bmi=peso/(altezza*altezza);

     printf("\n il tuo BMI è: %f",bmi);
     printf("\nVALORI del BMI\nSottopeso: meno di 18.5\nNormale: tra 18.5 e 24.9\nSovrappeso: tra 25 e 29.9\nObeso: 30 o oltre");




    return 0;
}