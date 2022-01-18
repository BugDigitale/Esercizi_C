/*
18-01-2022
Scrivere un programma in linguaggio C che legge N numeri interi da tastiera e li memorizza in un vettore.
Il numero N viene inserito dall'utente ed è massimo di 20. Il programma deve visualizzare, per ogni cifra
contenuta nel vettore, il numero di occorrenze. Ad esempio, si supponga N=7 e si consideri la sequenza di
numeri 1 6 15 6 2 15 15. Il programma deve visualizzare:
numero 1 occorrenze 1
numero 6 occorrenze 2
numero 15 occorrenze 3
numero 2 occorrenze 1


ANALISI E SPECIFICA
-dati in input: una serie numeri inseriti da tastiera
-precondizione: i numeri devono essere numeri interi e massimo 20 numeri
-dati in output: delle frasi con il numero di volte che si ripete un numero (le occorrenze)
-postcondzione: i numeri che si ripetono non devono essere ripetuti nel messaggio finale

NOME            TIPO                 DESCRZIONE
i               int                  variabile intermedia usata come indice
j               int                  variabile intermedia usata come indice
k               int                  variabile usata come contatore
controllo       int                  variabile usata come flag
n               int                  variabile dove vengono inseriti il numero di numeri che si vogliono inserire
inseriti        int                  vettore di interi usati per memorizzare la sequenza dei numeri

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main;
-funzione occorrenze;

ANALISI E SPECIFICA DELLA FUNZIONE main
-dati in input: una sequenza di numeri inseriti da tastiera
-precondizione: i numeri sono tutti interi e con un massimo di 20 numeri
-dati in output:
-postcondizione:

NOME             TIPO                 DESCRIZIONE
i                int                  variabile intermedia usata come indice
n                int                  variabile dove vengono inseriti il numero di numeri che si vogliono inserire
inseriti         int                  vettore di interi usati per memorizzare la sequenza dei numeri

ANALISI E SPECIFICA DELLA FUNZIONE occorrenze
-dati in input: la sequenza di numeri inserita nel main
-precondizione: 
-dati in output: il numero di ripetizioni di un numero
-postcondizione: i numeri che si ripetono non devono essere ripetuti nel messaggio finale

NOME             TIPO                  DESCRIZIONE
i                int                   variabile intermedia usata come indice
j                int                   variabile intermedia usata come indice
k                int                   variabile usata come contatore
controllo        int                   variabile usata come flag

PROGETTAZIONE
funzione main
-inserimento del numero di numeri da voler inserire
-insermiento dei numeri dal voler inserire nel vettore
-chiamata alla funzione occorrenze

funzione occorrenze
-controllo di numeri ripetuti per non farli stampare nella stampa della frase finale
-controllo di numeri ripetuti e calcolo delle occorrenze
-stampa delle occorrenze 

*/

#include<stdio.h>
#define N 20

void occorrenze(int inseriti[], int n){
	int i, j, k;
	int controllo; //vale 1 quando il controllo già è stato fatto, 0 altrimenti
	
	for(i=0;i<n;i++){
		controllo=0;
		for(j=0;j<i;j++){
			if(inseriti[i]==inseriti[j]){
				controllo=1;
			}
		}
		if(controllo==0){
			k=0;
			for(j=0;j<n;j++){
				if(inseriti[i]==inseriti[j]){
					k++;
				}
			}
			printf("\nnumero %d occorrenze %d", inseriti[i], k);
		}
	}
}

main(){
	int inseriti[N], i, n;
	
	printf("quanti numeri vuoi inserire? (meno di 20): ");
	scanf("%d",&n);
	
	if(n>20){
		printf("ERRORE");        
		exit(1);
	}
	
	printf("\nInserisci i numeri che vuoi: \n");
	for(i=0;i<n;i++){
	scanf("%d",&inseriti[i]);
	}
	
	occorrenze(inseriti, n);
}
