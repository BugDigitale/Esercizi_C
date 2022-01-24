/*
24-01-2022
Si scriva un programma in linguaggio C che acquisisca un numero intero positivo N da
tastiera e stampi il valore del fattoriale di N.
Suggerimento. Si ricorda che il fattoriale di un numero è il prodotto di tutti i numeri
compresi tra 1 ed N.
*/

#include<stdio.h>
#define N 100

int main(){
	int n=0, i, molt=0, fatt=0;
	
	printf("Inserisci un numero: ");
	scanf("%d", &n);
	molt=n;
	
	printf("\n\nI numeri che verranno moltiplicati sono:\n"); 
	do{
		printf("%d\n", n);
		n=n-1;
		molt=molt*n;
		
	}while(n!=1);
	printf("\nIl risultato finale e': %d", molt);
}
