/*
04-01-2022
Progettare e realizzare un programma che, dati due vettori di interi di dimensione N, ne costruisca un 
terzo di dimensione 2N i cui elementi di posizione pari siano gli elementi del primo vettore e gli 
elementi di posizione dispari siano gli elementi del secondo vettore.

ANALISI E SPECIFICA
dati in input: i due vettori inserti dall'utente
precondizione: i vettori devono essere due vettori interi di dimensione N specificata dal programmatore
dati in output: un terzo vettore di dimensione 2N
postcondizione: gli elementi di posizione pari siano gli elementi del primo vettore e gli elementi
di posizione dispari siano gli elementi del secondo vettore.

NOME        TIPO             DESCRIZIONE
vett1       array di interi  primo vettore creato
vett2       array di interi  secondo vettore creato
i           int              variabile usata come indice e contatore
j           int              variabile usata come indice e contatore
a           int              variabile usata come contatore
doppioVett  array di interi  array finale contente i primi due vettori inseriti


COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main;
-funzione terzoVettore;

ANALISI E SPECIFICA DELLA FUNZIONE main
-dati in input: i due vettori con numeri inseriti dall'utente
-precondizione: la lunghezza del vettore è fissa e scelta dal programmatore e i numeri sono solo interi
-dati in output:
-postcondizione:

NOME       TIPO              DESCRIZIONE
vett1      array di interi   primo vettore inserito
vett2      array di interi   secondo vettore inserito
i          int               variabile usata come indice
j          int               variabile usata come indice

ANALISI E SPECIFICA DELLA FUNZIONE terzoVettore
-dati in input: vettori inseriti nella funzione main
-precondizione:
-dati in output: vettore creato dall'unione dei primi due vettori ricevuti in input
-postcondizione: il vettore deve essere grande il doppio dei primi due

NOME         TIPO               DESCRZIONE
doppioVett   array di int       vettore creato dall'unione dei primi due
j            int                variabile usata come indice
i            int                variabile usata come contatore 
a            int                variabile usata come contatore
*/

#include<stdio.h>
#define N 4
#define M 2*N

void terzoVettore(int vett1[], int vett2[]){
	int j, i=0, a=0, doppioVett[M];
	
	printf("Gli elementi del terzo vettore sono: ");
	for(j=0;j<M;j++){
		for(j=0;j<M;j++){
		if(j%2==0){
			doppioVett[j]=vett1[i];
			printf("%d\n",doppioVett[j]);
			i++;
		}else{
			doppioVett[j]=vett2[a];
			printf("%d\n",doppioVett[j]);
			a++;
		}
		}
	}
}

main(){
	
	int vett1[N], vett2[N], i, j;
	
	printf("Inserisci i numeri del primo vettore: ");
	for(i=0;i<N;i++){
	scanf("%d",&vett1[i]);
	}
	printf("Inserisci i numeri del secondo vettore:");
	for(j=0;j<N;j++){
	scanf("%d",&vett2[j]);
	}
	
	terzoVettore(vett1, vett2);
	
}
