/*
25-11-2021
Progettare e realizzare un programma che legge una sequenza di n interi e li memorizza in una array a,
ne calcola il quadrato di ciascuno e lo memorizza in una array b, ne calcola il cubo, memorizzandolo 
in una array c, infine visualizza il contenuto di b e di c.

ANALISI E SPECIFICA
dati in input: una sequenza di n numeri 
precondizione: i numeri devono essere interi
dati in output: il quadrato e il cubo dei numeri memorizzati 
postcondizione: i numeri calcolati dovranno essere visualizzati in due sequenze distinte

NOME        TIPO           DESCRIZIONE
numIns      array di int   array di interi che contiene la sequenza di numeri inserita
quad        array di int   array di int che contiene il quadrato dei numeri memorizzati
cubo        array di int   array di int che contiene il cubo dei numeri memorizzati
i           int            variabile intermedia usata come indice
n           int            il quantitativo di numeri che si vuole inserire nell'array 

Come posso dividere il programma?
-Funzione main
-Funzione calcolo_quad
-Funzione calcolo_cubo

ANALISI E SPECIFICA DELLA FUNZIONE main
dati in input: sequenza di numeri n 
precondizione: numeri interi
dati in output: visualizzazione dei calcoli 
postcondizione: 

NOME     TIPO           DESCRIZIONE
numIns   array di int   array di interi che contiene la sequenza di numeri inserita
i           int            variabile intermedia usata come indice

ANALISI E SPECIFICA DELLA FUNZIONE calcolo_quad
dati in input: 
precondizone:
dati in output: risultato dei numeri al quadrato
postcondizione: calcolare tutti i numeri e inserirli in un array

NOME     TIPO           DESCRZIONE
quad     array di int   array di int che contiene il quadrato dei numeri memorizzati
i        int            variabile intermedia usata come indice

ANALISI E SPECIFICA DELLA FUNZIONE calcolo_cubo
dati in input: 
precondizone:
dati in output: risultato dei numeri al cubo
postcondizione: calcolare tutti i numeri e inserirli in un array

NOME    TIPO            DESCRIZIONE 
cubo    array di int    array di int che contiene il cubo dei numeri memorizzati
i       int             variabile intermedia usata come indice

PROGETTAZIONE
Funzione main
-faccio inserire la sequenza di n numeri all'utente
	-specifico che debbano essere tutti numeri interi
-faccio il richiamo alla funzione calcolo_quad
-faccio il richiamo alla funzione calcolo_cubo


Funzione calcolo_quad
-Calcolo i numeri inseriti 
	-Calcolo il quadrato
	-lo inserisco in un array
-salvo i vari risultati e termino la funzione
-visualizzo i vari risultati

Funzione calcolo_cub
-Calcolo i numeri inseriti
	-Calcolo il cubo
	-lo inserisco in un array
-salvo i vari risultati e termino la funzione
-visualizzo i vari risultati


*/


#include<stdio.h>
#define MAX 1000

void calcolo_quad(int a[], int n){
	int quad[MAX];
	int i;
	
	for(i=0;i<n;i++){
		quad[i]= a[i]*a[i];
		printf("\nIl quadrato e': %d", quad[i]);
	}
	printf("\n");
	
}

void calcolo_cubo(int a[], int n){
	int cubo[MAX];
	int i;
	
	for(i=0;i<n;i++){
		cubo[i]= a[i]*a[i]*a[i];
		printf("\nIl cubo e': %d", cubo[i]);
	}
	
}

int main(){
	
	int numIns[MAX], i,n=0;
	
	printf("Quanti numeri vuoi inserire nel vettore? ");
	scanf("%d",&n);
	
	printf("Inserisci i numeri che vuoi calcolare al quadrato e al cubo:");
	for(i=0;i<n;i++){
		scanf("%d",&numIns[i]);
	}
	
	calcolo_quad(numIns, n);
	calcolo_cubo(numIns, n);


}






