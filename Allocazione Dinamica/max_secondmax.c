/*
21-01-2022
Scrivete una funzione con prototipo void max_secondmax ( int a[], int n, int *max, int *second_max )
che, dato un array a di lunghezza n individui il valore più grande in a e il secondo elemento per grandezza in a, e li
memorizzi nelle variabili puntate da max e second_max. 

ANALISI E SPECIFICA
-dati in input: un vettore di numeri scelti dall'utente
-precondizione: il vettore deve essere di int
-dati in output: il numero più grande del vettore e il secondo numero più grande
-postcondizione: memorizzare in due puntatori con una funzione

NOME         TIPO            DESCRIZIONE
n            int             variabile dove vengono segnati quanti numeri si vogliono inserire
a            int             puntatore dove verranno segnati i numeri dell'array con l'allocazione dinamica
i            int             variabile intermedia usata come indice
max          int             puntatore che punta al numero più grande
second_max   int             puntatore che punta al secondo più grande
m            int             variabile dove è inserito il numero più grande
s            int             variabile dove è inserito il secondo numero più grande

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main;
-funzione max_secondmax;

ANALISI E SPECIFICA DELLA FUNZIONE main
-dati in input: vettore inserito dall'utente
-precondizione: vettore di int
-dati in output: 
-postcondizione:

NOME         TIPO            DESCRIZIONE
n            int             variabile dove vengono segnati quanti numeri si vogliono inserire
a            int             puntatore dove verranno segnati i numeri dell'array con l'allocazione dinamica
i            int             variabile intermedia usata come indice
max          int             puntatore che punta al numero più grande
second_max   int             puntatore che punta al secondo più grande

ANALISI E SPECIFICA DELLA FUNZIONE max_secondmax
-dati in input: vettore dal main
-precondizione: 
-dati in output: il numero più grande e il secondo più grande
-postcondizione: memorizzare in due puntatori

NOME         TIPO            DESCRIZIONE
m            int             variabile dove è inserito il numero più grande
s            int             variabile dove è inserito il secondo numero più grande
i            int             variabile intermedia usata come indice

PROGETTAZIONE
funzione main
-inserimento dei numeri nel vettore
-visualizzazione dei numeri
-richiamo alla funzione max_secondmax

funzione max_secondmax
-controllo numero maggiore e secondo maggiore
-puntatori settati per puntare alle due variabili con i risultati
-visualizzazione del numero maggiore e secondo maggiore
*/

#include<stdio.h>
#include<stdlib.h>

void max_secondmax(int a[], int n, int *max, int *second_max);

int main(){
	int n=0, *a, i;
	int *max;
	int *second_max;
	
	printf("Quanti numeri vuoi nel vettore(massimo 100): ");
	scanf("%d", &n);
	
	printf("\nInserisci i numeri:\n");
	a=malloc(n * sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	printf("\n\nI numeri sono: ");
	for(i=0;i<n;i++){
		printf("\n");
		printf("%d", a[i]);
	}
	max_secondmax(a, n, max, second_max);
}

void max_secondmax(int a[], int n, int *max, int *second_max){
	int m=0, s=0, i;
	
	
	for(i=0;i<n;i++){
		if(m<a[i]){
			s=m;
			m=a[i];
		}else if (s<a[i]) {
			s=a[i];
		}
	}
	max=&m;
	second_max=&s;
		
	printf("\n\nIl numero piu' grande e': %d", *max);
	printf("\n\nIl secondo numero piu' grande e': %d", *second_max);
}
