/*

Si scriva un programma che calcola il MCD con l'algoritmo di Euclide.
L'algoritmo di Euclide è un algoritmo per trovare il massimo comun divisore (indicato di seguito 
con MCD) tra due numeri interi. 
Dati due numeri interi a e b, si controlla se b è zero.
Se lo è, a è il MCD. Se non lo è, si divide a/b e si assegna ad r il resto della divisione.
Se r=0 allora si può terminare affermando che b è il MCD cercato, altrimenti occore assegnare
a=b e b=r e si ripete nuovamente la divisione.


ANALISI E SPECIFICA

dati in input: Due numeri  
precondizione: i due numeri devono essere interi
dati in output: il MCD tra i due numeri e il resto
postcondizione: se b=0 allora a è MCD, se a=0 allora b è il MCD

NOME    TIPO      DESCRIZIONE
a       int       Variabile int a
b       int       Variabile int b
r       int       Variabile con il resto

Come posso dividere il programma?
-Funzione calcolo_mcd
-Funzione main

ANALISI E SPECIFICA DELLA FUNZIONE calcolo_mcd
dati in input:
precondizione:
dati in output: il volore del resto e del MCD
postcondizione: viene fatta la divisione finchè r è diverso da 0

NOME    TIPO       DESCRIZIONE
r       int        volore del resto della divisione

ANALISI E SPECIFICA DELLA FUNZIONE main
dati in input: 2 numeri a e b inseriti dall'utente
precondizione: i 2 numeri devono essere due interi
dati in output:
postcondizione:

NOME     TIPO        DESCRIZIONE
a        int         primo valore intero inserito dall'utente
b        int         secondo valore intero inserito dall'utente

PSEUDOCODIFICA
INZIO
funzione calcolo_mcd
se b=0 allora stampa a
altrimenti a%b
	fai
		se r=0 allora b
		altriementi a=b e b=r 
	finche r!=0

funzione main
Far inserire il primo numero intero
inizializzarlo come a
far inserire il secondo numero intero
inizializzarlo come b
richiamo la funzione calcolo_mcd su a e b


*/


#include<stdio.h>

int calcolo_mcd(int a, int b){
	int r;
	if(b==0){
		printf("il MCD e': %d",a);
	}else{
		do{
			r=a%b;
			if(r==0){
				printf("\nil MCD e': %d", b);
			} else{
				a=b;
				b=r;
			}
		}while(r!=0);
	}
}


main(){
	int a, b;
	
	printf("Inserire il primo numero: ");
	scanf("%d",&a);
	printf("\nInserire il secondo numero: ");
	scanf("%d",&b);
	
	calcolo_mcd(a,b);
}
