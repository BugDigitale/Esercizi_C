/*
20-01-2022
Scrivete una funzione con prototipo void split_time ( long int tot_sec, int *h, int *m, int *s ) che,
dato un orario fornito in numero di secondi dalla mezzanotte, calcoli l’orario equivalente in ore, minuti, secondi, e lo
memorizzi nelle tre variabili puntate da (h), (m) e (s) rispettivamente.

ANALISI E SPECIFICA
-dati in input: un numero inserito da tastiera che equivale a dei secondi
-precondizione: il numero dovrà essere un intero
-dati in output: i secondi, i minuti e le ore calcolati dal numero iniziale inserito
-postcondizione: i numeri finali dovranno essere tutti int e dovranno essere calcolati in una funzione apposita (split_time)

NOME             TIPO                 DESCRIZIONE
tot_sec          long int             una variabile contente i secondi totali
*h               int                  puntatore che punta alle ore
*m               int                  puntatore che punta ai minuti
*s               int                  puntatore che punta ai secondi
i                int                  variabile intermedia usata come indice
min              int                  varibaile contente i minuti
ore              int                  variabile contente le ore

COME POSSO DIVEDERE IL PROGRAMMA?
-funzione main
-funzione split_time

ANALISI E SPECIFICA DELLA FUNZIONE main
-dati in input: inserimento dei secondi totali
-precondizione: il numero dovrà essere un int
-dati in output:
-postcondizione:

NOME             TIPO                 DESCRZIONE
tot_sec          long int             una variabile contente i secondi totali
*h               int                  puntatore che punta alle ore
*m               int                  puntatore che punta ai minuti
*s               int                  puntatore che punta ai secondi

ANALISI E SPECIFICA DELLA FUNZIONE split_time
-dati in input: i secondi inseriti nel main
-precondizione:
-dati in output: il numero dei secondi, minuti e ore
-postcondizione: i numeri in output dovranno essere interi

NOME             TIPO                 DESCRIZIONE
i                int                  variabile intermedia usata come indice
min              int                  varibaile contente i minuti
ore              int                  variabile contente le ore

PROGETTAZIONE
funzione main
-inserisco il numero di secondi e li inizzializzo
-con un puntatore (s) punto alla cella di memoria tot_sec
-richiamo della funzione split_time

funzione split_time
-calcolo i minuti
-calcolo le ore
-con due puntatori (m, o) punto alle celle di memoria di min e ore
-stampo i risultati
*/

#include<stdio.h>

void split_time( long int tot_sec, int *h, int *m, int *s);

int main(){
	
	long int tot_sec;
	int *h, *m, *s;
	
	printf("Inserisci quanti secondi vuoi calcolare: ");
	s= &tot_sec;
	scanf("%d", s);
	
	
	
	split_time(tot_sec, h, m, s);	
	
}

void split_time( long int tot_sec, int *h, int *m, int *s){
	
	int i, min=0, ore=0; 
	
	min= tot_sec/60;
	m= &min;
	
	ore= min/60;
	h= &ore;
	
	printf("\n\nSecondi: %d", *s);
	printf("\n\nMinuti: %d", *m);
	printf("\n\nOre: %d", *h);
	
}

