/*
Scrivere un programma in linguaggio C che legga da tastiera una sequenza di lunghezza ignota a priori
di numeri interi positivi. Il programma, a partire dal primo numero introdotto, stampa ogni volta la 
media di tutti i numeri con solo 2 cifre decimali. Terminare quando il numero inserito è negativo

ANALISI E SPECIFICA
dati in input: un sequenza di numeri
precondizione: la lunghezza è ignota e i numeri devono essere interi positivi
dati in output: stampa della media di tutti i numeri
postcondizione: fare la media man mano che i numeri vengono inseriti

NOME      TIPO          DESCRIZIONE
num       int           variabile contenente i numeri interi positivi
tot       float         variabile contenente la somma dei numeri
media     float         variabile contente la media dei numeri
i         int           contatore

PROGETTAZIONE
Funzione main
-faccio inserire i numeri dall'utente
	-inserimento di solo numeri interi positivi
-faccio un ciclo 
	-faccio la somma di tutti i numeri inseirti
    -faccio la media di tutti i numeri inseriti
-visualizzo il risualtato

*/

#include<stdio.h>

main(){
	int num=0, i=0;
	float media=0, tot=0;

	do{ 
		printf("\nInserisci un numero: ");
		scanf("%d",&num);
		tot=tot+num;
		i++;
		media=tot/i;
		if(num>0)
		printf("\nLa media e': %.2f", media);
	}while(num>0);
	
}
	
	
	
	

