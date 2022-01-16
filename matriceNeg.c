/*
16-01-2022

Data una matrice di dimensione uguale a 10 righe per 10 colonne contente elementi reali,
scrivere un programma in linguaggio C per individuare se esistono righe o colonne composte 
solo da elementi negativi

ANALISI E SPECIFICA
-dati in input: una matrice inserita dall'utente
-precondizione: i numeri devono essere numeri reali
-dati in output: un messaggio che dice se ci sono colonne o righe negative
-postcondizione: i numeri di almeno una riga o una colonna devono essere del tutto negativi

NOME        TIPO            DESCRIZIONE
mat         float           matrice di elementi reali
i           int             variabile intermedia usata come indice 
j           int             variabile intermedia usata come indice 
trovato     int             variabile di flag
valido      int             variabile di flag

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main
-funzione controllo

ANALISI E SPECIFICA DELLA FUNZIONE main
-dati in input: una matrice inserita dall'utente
-precondizione: i numeri devono essere numeri reali
-dati in output: visualizzazione della matrice appena creata
-postcondizione:

NOME        TIPO              DESCRIZIONE    
mat         float             matrice creata dall'utente
i           int               variabile usata come indice
j           int               variabile usata come indice

ANALISI E SPECIDICA DELLA FUNZIONE controllo
-dati in input: la matrice creata nella funzione main
-precondizione:
-dati in output: un messaggio che dice se ci sono righe o colonne negative
-postcondizione: i numeri di almeno una riga o una colonna devono essere del tutto negativi

NOME         TIPO              DESCRIZIONE
i            int               variabile usata come indice
j            int               variabile usata come indice
trovato      int               variabile di flag
valido       int               variabile di flag

PROGETTAZIONE
funzione main
-inserimento dei numeri nella matrice
-visualizzazione della matrice
-richiamo alla funzione controllo

funzione controllo
-controllo sulle righe
-controllo sulle colonne
-stampa del messaggio in base al risualtato del flag
*/

#include<stdio.h>
#define righe 3
#define colonne 3 

void controllo(float mat[][colonne]){
	int i, j;
	int trovato;  //flag che vale 1 se trova una riga negativa o un colonna negativa, flag che vale 0 altrimenti 
	int valido;  //flag che vale 1 se viene rispettata la condizione
	
	valido=0;
	for(i=0;i<righe;i++){
		trovato=1;
		for(j=0;j<colonne;j++){
			if(mat[i][j]>0){
				trovato=0;
			}
		}
		if(trovato==1){
			valido=1;
		}
	}
	
	for(j=0;j<righe;j++){
		trovato=1;
		for(i=0;i<colonne;i++){
			if(mat[i][j]>0){
				trovato=0;
			}
		}
		if(trovato==1){
			valido=1;
		}
	}
	if(valido==1){
			printf("\nesiste almeno una colonna o una riga negativa\n");
		}else{
			printf("\nnon esiste neanche una colonna o una riga negativa\n");
		}
	
}
	
void main(){
	float mat[righe][colonne]; 
	int i, j;
	
	printf("inserire i numeri reali della matrice:\n");
	for(i=0;i<righe;i++){
		for(j=0;j<colonne;j++){
			printf("inserimento %d %d ",i,j);
			scanf("%f",&mat[i][j]);
		}	
	}
	for(i=0;i<righe;i++){
		printf("\n");
		for(j=0;j<colonne;j++){
			printf("%.2f ", mat[i][j]);
		}
	}
	
	controllo(mat);
}
