/*

Si scriva un programma che calcola il MCD con l'algoritmo di Euclide.
L'algoritmo di Euclide è un algoritmo per trovare il massimo comun divisore (indicato di seguito 
con MCD) tra due numeri interi. 
Dati due numeri interi a e b, si controlla se b è zero.
Se lo è, a è il MCD. Se non lo è, si divide a/b e si assegna ad r il resto della divisione.
Se r=0 allora si può terminare affermando che b è il MCD cercato, altrimenti occore assegnare
a=b e b=r e si ripete nuovamente la divisione.


ANALISI E SPECIFICA

dati in input: Due numeri interi 
precondizione:
dati in output: il MCD tra i due numeri e il resto
postcondizione: se b=0 allora a è MCD, se a=0 allora b è il MCD

NOME    TIPO      DESCRIZIONE
a       int       Variabile int a
b       int       Variabile int b
r       int       Variabile con il resto

PSEUDOCODIFICA
INZIO
Far inserire il primo numero intero
inizializzarlo come a
far inserire il secondo numero intero
inizializzarlo come b

se b=0 allora stampa a
altrimenti a%b
	fai
		se r=0 allora b
		altriementi a=b e b=r 
	finche r!=0

*/


#include<stdio.h>
	
main(){
	int a, b, r;
	
	printf("Inserire il primo numero: ");
	scanf("%d",&a);
	printf("\nInserire il secondo numero: ");
	scanf("%d",&b);
	
	if(b==0){
		printf("il MCD e': %d",a);
	}else{
		do{
			r=a%b;
			if(r==0){
				printf("il MCD e': %d", b);
			} else{
				a=b;
				b=r;
			}
		}while(r!=0);
	}
}
