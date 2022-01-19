/*
19-01-2022
Scrivi un programma per realizzare una lista di interi inseriti da tastiera, l'inserimento deve proseguire fin tanto che non viene inserito il numero 0,
poi la lista viene stampata. Realizza un secondo programma che affidi ad una funzione, l'operazione di stampa.

ANALISI E SPECIFICA
-dati in input: una sequenza di numeri 
-precondizione: i numeri verranno inseriti finchè l'utente non inserisce lo 0
-dati in output: stampa dei numeri scritti
-postcondizione: lo zero non dovrà essere stampato

NOME           TIPO             DESCRIZIONE
vett           vettori di int   sequenza di numeri inseriti dall'utente
i              int              variabile intermedia usata come indice e contatore
n              int              variabile usata come contatore
controllo      int              variabile di flag
*p             puntatore int    variabile usata come puntatore

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main;
-funzione stampa;

ANALISI E SPECIFICA DELLA FUNZIONE main
-dati in input: sequenza di numeri inseriti dall'utente
-precondizione: i numeri verranno inseriti finchè l'utente non inserisce lo 0
-dati in output:
-postcondizione:

NOME           TIPO              DESCRIZIONE
vett           vettori di int    sequenza di numeri inseriti dall'utente
i              int               variabile intermedia usata come indice e contatore
n              int               variabile usata come contatore
controllo      int               variabile di flag
*p             puntatore int     variabile usata come puntatore

ANALISI E SPECIFICA DELLA FUNZIONE stampa
-dati in input: sequenza inserita nella funzione main
-precondizione:
-dati in output: la stampa dei numeri inseriti
-postcondizione: lo zero non dovrà essere stampato

NOME            TIPO              DESCRIZIONE
i               int               variabile intermedia usata come indice

PROGETTAZIONE
funzione main
-inserimento dei numeri
-vettore posto nel puntatore
-controllo di fine vettore 
-richiamo alla funzione stampa

funzione stampa
-stampa dei numeri inseriti nel main
*/

#include<stdio.h>
#define N 100

void stampa(int *p, int n);

int main(){
	int vett[N];
	int i, n=0, controllo=0;
	int *p;
	
	printf("\nInserisci i numeri del vettore: ");
	do{
		p=vett;
		scanf("%d", &p[i]);
		if(p[i]==0){
			controllo=1;
		}
		n++;
		i++;
	}while(controllo==0);
	
	stampa( p, n);
	return 0;
}

void stampa(int *p, int n){
	int i;
	
	printf("\nI numeri inseriti sono: ");
	for(i=0; i<n-1; i++){
		printf("\n");
		printf("%d", p[i]);
	}
}
