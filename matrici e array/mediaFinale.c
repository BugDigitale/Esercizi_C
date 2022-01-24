/*
24-01-2022
Si scriva un programma in linguaggio C per calcolare la media aritmetica di una serie di numeri inseriti da tastiera. 
L’introduzione di un valore particolare pari a “0” indica il termine del caricamento dei dati.
*/

#include<stdio.h>
#include<stdlib.h>
#define N 100

int main(){
	float a[N], media=0, ris=0;
	int i, controllo=0, k=0;
	
	printf("Inserisci i numeri (inserisci 0 per fermare il programma): ");
	do{
		scanf("%f", &a[i]);
		if(a[0]==0){
			printf("\nInserire altri numeri!");
			exit(0);
		}
		media= media+a[i];
		if(a[i]!=0){
			k++;
		}
		ris= media/k;
		if(a[i]==0){
			controllo=1;
		}
	}while(controllo!=1);
	
	printf("\n\nLa media e': %.2f", ris);
	
	
}

