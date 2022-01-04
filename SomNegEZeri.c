/*
26-11-2021
Dopo aver letto e memorizzato 8 numeri in un array, calcolare la somma di quelli negativi e memorizzare zero al loro posto.

ANALISI E SPECIFICA
dati in input: array di numeri
precondizione: la grandezza dell'array è di 8 e i numeri posso essere sia negativi che positivi
dati in output: somma dei numeri negativi e visualizzazione dell'array con gli zero al posto dei numeri negativi
postcondizione: fare il calcola della somme e creare un array nuovo con gli zero al posto dei numeri negativi

NOME       TIPO            DESCRIZIONE
arrayIn    array di float  array che contiene i numeri inseriti dall'utente
somma      float           variabile con la somma di tutti i numeri negativi
i          int             variabile intermedia usata come indice
arrayZeri  array di float  array che contiene i numeri inseriti inzialmente con gli 0 al posto dei numeri negativi

Come posso dividere il programma?
-Funzione main;
-Funzione sommaNeg;
-Funzione sostArray.

ANALISI E SPECIFICA DELLA FUNZIONE main
dati in input: array di numeri inseriti dall'utente
precondizione: grandezza dell'array uguale a 8
dati in output: 
postcondizione:

NOME      TIPO            DESCRIZIONE
arrayIn   array di float  array che contiene i numeri inseriti dall'utente
i         int             variabile intermedia usata come indice


ANALISI E SPECIFICA DELLA FUNZIONE sommaNeg
dati in input: 
precondizione:
dati in output: somma di tutti i valori negatiivi
postcondizione: fare calcolo della somma nell'array

NOME      TIPO            DESCRIZIONE
somma     float           variabile con la somma di tutti i numeri negativi
i         int             variabile intermedia usata come indice


ANALISI E SPECIFICA DELLA FUNZIONE sostArray
dati in input: 
precondizione:
dati in output: i numeri iniziali ma con gli 0 al posto dei numeri negativi
postcondizione: creare un nuovo array dove inserire gli 0

NOME       TIPO             DESCRIZIONE
i          int              variabile intermedia usata come indice

*/

#include<stdio.h>
#define N 8

void sommaNeg(float a[]){
	int i;
	float somma;

	for(i=0;i<N;i++){
		if(a[i]<0){
			somma=somma+a[i];
		}
	}
	printf("La somma di tutti i valori negativi e': %.2f", somma);
}

void sostArray(float a[]){
	int i;
	
	printf("\n\nIl nuovo array e': ");
	for(i=0;i<N;i++){
		if(a[i]<0){
			printf("0\n");
		} else{
		printf("%.2f\n",a[i]);
		}
	}
	
}

void main(){
	float arrayIn[N];
	int i;
	
	printf("Inserire i numeri dell'array: ");
	for(i=0;i<N;i++){
		scanf("%f",&arrayIn[i]);
	}
	
	sommaNeg(arrayIn);
	sostArray(arrayIn);
	
	
}





