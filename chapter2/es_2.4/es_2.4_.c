#include <stdio.h>



int main() {


	int x,y,z,result;

	printf("\nInserisci il primo numero: ");
	scanf("%d",&x);
	printf("\nInserisci il secondo numero: ");
	scanf("%d",&y);
	printf("\nInserisci il terzo numero: ");
	scanf("%d",&z);

	result=x*y*z;

	printf("\nIl risultato di x*y*z: %d",result);

	return 0;

}