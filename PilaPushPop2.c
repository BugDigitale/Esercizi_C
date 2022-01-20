/*
20-01-2022
Scrivi un programma per realizzare una lista di interi inseriti da tastiera, l'inserimento deve essere effettuato da una funzione (push)
che inserisce un elemento in fondo alla lista. Il programma deve prevedere la presenza di una funzione (pop) che toglie un elemento
scelto dall' dall'utente, presente nella lista, la stessa funzione si occuperà di riorganizzare la struttura dopo tale operazione.

ANALISI E SPECIFICA
-dati in input: una lista di numeri inseriti dall'utente
-precondizione: i numeri dovranno essere degli interi
-dati in output: la lista aggiornata con un nuovo numero, ed elimanando il primo inserito, così da creare una struttura a pila
-postcondizone: Far inserire dall'utente il numero da voler togliere. Utilizzare due funzioni: una per inserire il nuovo numero 
 (push) e l'altra per togliere il primo inserito (pop)

NOME           TIPO                 DESCRIZIONE
vett           int                  vettore di int contente i numeri inseriti dall'utente
i              int                  variabile intermedia usata come indice
*p             int                  puntatore che punta al vettore inserito dall'utente
n              int                  variabile usata per segnare la posizione del numero da eliminare

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main;
-funzione push;
-funzione pop;

ANALISI E SPECIFICA DELLA FUNZIONE main
-dati in input: una sequenza di numeri inseriti dall'utente
-precondizone: i numeri devono essere degli interi
-dati in output:
-postcondizione:

NOME            TIPO                 DESCRIZIONE
vett            int                  vettore di int contente i numeri inseriti dall'utente
i               int                  variabile intermedia usata come indice
*p              int                  puntatore che punta al vettore inserito dall'utente

ANALISI E SPECIFIA DELLA FUNZIONE push
-dati in input: la sequenza di numeri inserita nel main
-precondizione:
-dati in output: la nuova pila aggiornata del numero inserito
-postocondzione: il numero deve inserito in fondo 

NOME            TIPO                  DESCRIZIONE
i               int                   variabile intermedia usata come indice

ANALISI E SPECIFICA DELLA FUNZIONE pop
-dati in input: la sequenza di numeri inserita nel main e aggiornata nella funzione push
-precondizione:
-dati in output: la nuova pila aggiornata senza il primo numero inserito
-postocondzione: Far inserire dall'utente la posizione del numero da eleminare

NOME            TIPO                  DESCRIZIONE
i               int                   variabile intermedia usata come indice
n               int                   variabile usata per segnare la posizione del numero da eliminare

PROGETTAZIONE
funzione main
-inserimento dei numeri
-puntatore p che punta al vettore inserito
-richiamo alla funzione push
-richiamo alla funzione pop

funzione push
-inserimento del nuovo numero
-stampa della nuova sequenza

funzione pop
-inserimento della posizione del numero che si vuole eliminare
-controllo della posizione 
-stampa della nuova sequenza
*/
#include<stdio.h>
#define N 5

void push(int *p);
void pop(int *p);

int main(){
	int vett[N], i;
	int *p;
	
	printf("Inserisci i numeri che vuoi nella pila:\n");
	p= vett;
	for(i=0;i<N;i++){
		scanf("%d", &p[i]);
	}
	push(p);
	pop(p);
}

void push(int *p){
	int i;
	
	printf("Inserisci il numero nuovo che vuoi nella pila: ");
	scanf("%d", &p[N]);	
	
	printf("\n\nLa nuova pila e': ");     
	for(i=0;i<N+1;i++){
		printf("\n");
		printf("%d", p[i]);
	}	
}

void pop(int *p){
	int i, n=0;
	
	printf("\n\nScegli la posizione del numero che vuoi togliere: ");
	scanf("%d", &n);

	if(n>N+1){
		printf("\n\n**ERRORE** Alla posizione del numero inserito non c'e' nulla!");
		printf("\nLa pila e' rimasta invariata:");
	}else{
		printf("\n\nLa pila scalata della posizione del numero selezionato e':");
	}

	for(i=0;i<N+1;i++){
		if(i==n-1){
			continue;
		}
		printf("\n");
		printf("%d", p[i]);
	}
}
